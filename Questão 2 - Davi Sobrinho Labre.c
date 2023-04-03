#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    
    int dddtrc, dddtc, telefonerc, telefonec, telefoneco;
    char rSocial[50], nome[50], endereco[50], bairro[50], estado[15], cidade[50], email[50], cEndereco[50], pj, boletos, cep[10], cpf[11], dataNascimento[8], data[8], nEndereco[10];
	char cnpj[20] = "__________________",  inscricaoE[20] = "_______________",  inscricaoM[20] = "_______________", cnae[20] = "_______________", telefoner[12] = "_______________";
	printf("--------------------\n");
    printf("Dados do credenciado\n");
    printf("--------------------\n");
    printf("Insira a razao social: ");
    scanf(" %[^\n]s",&rSocial);
    fflush(stdin);
    printf("Insira o nome completo: ");
    scanf(" %[^\n]s",&nome);
	fflush(stdin);
    printf("Insira o endereco: ");
    scanf(" %[^\n]s",&endereco);
    fflush(stdin);
	printf("Insira o numero do endereco: ");
    scanf(" %[^\n]s",&nEndereco);
    fflush(stdin);
	printf("Insira o complemento: ");
    scanf(" %[^\n]s",&cEndereco);
    fflush(stdin);
	printf("Insira o bairro: ");
    scanf(" %[^\n]s",&bairro);
    fflush(stdin);
	printf("Insira o CEP: ");
    scanf(" %[^\n]s",&cep);
    fflush(stdin);
	printf("Insira a sigla do estado: ");
    scanf(" %[^\n]s",&estado);
    fflush(stdin);
	printf("Insira a cidade: ");
    scanf(" %[^\n]s",&cidade);
    fflush(stdin);
	printf("Insira o ddd do telefone residencial ou comercial: ");
    scanf(" %d", &dddtrc);
    fflush(stdin);
	printf("Insira o numero do telefone comercial ou residencial: ");
    scanf(" %d", &telefonerc);
    fflush(stdin);
	printf("Insira o ddd do telefone celular: ");
    scanf(" %d", &dddtc);
    fflush(stdin);
	printf("Insira o numero do telefone celular: ");
    scanf(" %d", &telefonec);
    fflush(stdin);
	printf("Insira o CPF: ");
    scanf(" %[^\n]s", &cpf);
    fflush(stdin);
    printf("Insira 's' ou 'n' para Pessoa Juridica:");
    scanf(" %c",&pj);
    fflush(stdin);
	if (pj=='s'){
    	printf("Insira o CNPJ(preenchimento exclusivo para PJ): ");
    	scanf(" %[^\n]s", &cnpj);
    	fflush(stdin);
		printf("Insira a inscricao estadual(preenchimento exclusivo para PJ): ");
    	scanf(" %[^\n]s", &inscricaoE);
    	fflush(stdin);
		printf("Insira a inscricao municipal(preenchimento exclusivo para PJ): ");
    	scanf(" %[^\n]s", &inscricaoM);
    	fflush(stdin);
		printf("Insira o CNAE(preenchimento exclusivo para PJ): ");
    	scanf(" %[^\n]s", &cnae);
    	fflush(stdin);
		printf("Insira o contato do responsavel(exclusivo para PJ): ");
    	scanf(" %[^\n]s", &telefoner);
    	fflush(stdin);
		printf("Insira a data de nascimento: ");
	    scanf(" %[^\n]s", &dataNascimento);
	    fflush(stdin);
	    printf("Deseja rereber os proximos boletos por email? Insira 's' ou 'n': ");
	    scanf(" %[^\n]c", &boletos);
	    if (boletos=='s'){
		}else{
			if (boletos=='n'){
			}else{
				printf("O valor inserido é invalido, os boletos nao serao enviados por email!!!\n");
			}
			
		}
	    fflush(stdin);
	    printf("Insira o e-mail: ");
	    scanf(" %[^\n]s", email);
	    fflush(stdin);
		printf("Insira o numero do telefone comercial: ");
	    scanf(" %d", &telefoneco); 
	    fflush(stdin);
		printf("Insira a data: ");
		scanf(" %[^\n]s", &data);
		fflush(stdin);
		printf("\n\n\n");
	}else{
		if (pj=='n'){
			printf("Insira a data de nascimento: ");
		    scanf(" %[^\n]s", &dataNascimento);
		    fflush(stdin);     
		    printf("Deseja rereber os proximos boletos por email? Insira 's' ou 'n': ");
	    	scanf(" %c", &boletos);
	    	fflush(stdin);
			if (boletos=='s'){
			}else{
				if (boletos=='n'){
				}else{
				printf("O valor inserido é invalido, os boletos nao serao enviados por email!!!\n");
				}
			}
		    printf("Insira o e-mail: ");
		    scanf(" %[^\n]s", &email);
		    fflush(stdin);
			printf("Insira o numero do telefone comercial: ");
		    scanf(" %d", &telefoneco);
		    fflush(stdin);
			printf("Insira a data: ");
		    scanf(" %[^\n]s", &data);
		    fflush(stdin);
			printf("\n\n\n");
		}else {
			printf("O valor inserido e invalido, os dados relacionados a PJ nao serao adicionados!!!\n");
			printf("Insira a data de nascimento: ");
		    scanf(" %[^\n]s", &dataNascimento);
		    fflush(stdin);
		    printf("Deseja rereber os proximos boletos por email? Insira 's' ou 'n': ");
	    	scanf(" %c", &boletos);
	    	fflush(stdin);
		    if (boletos=='s'){
			}else{
				if (boletos=='n'){
				}else{
					printf("O valor inserido é invalido, os boletos nao serao enviados por email!!!\n");
				}
				
			}
		    printf("Insira o e-mail: ");
		    scanf(" %[^\n]s", &email);
		    fflush(stdin);
			printf("Insira o numero do telefone comercial: ");
		    scanf(" %d", &telefoneco);
		    fflush(stdin);
			printf("Insira a data: ");
		    scanf(" %[^\n]s", &data);
		    fflush(stdin);
			printf("\n\n\n");
		}	
	}
	le_valida_placa(dddtrc,dddtc,telefonerc,telefonec,telefoneco,rSocial, nome, endereco, bairro, estado, cidade, email,
	cEndereco, pj, boletos, cep, cpf, dataNascimento, data, nEndereco,
	cnpj,  inscricaoE,  inscricaoM, cnae, telefoner);

}
void le_valida_placa(int dddtrc,int dddtc,int telefonerc,int telefonec,int telefoneco, char rSociall[],char nome[],char endereco[],char bairro[],char estado[],char cidade[],char email[],char cEndereco[],char pj,char boletos,char cep[],char cpf[],char dataNascimento[],char data[], char nEndereco[],char cnpj[],char  inscricaoE[], char  inscricaoM[],char cnae[],char telefoner[]){
	int ano1, ano2, ano3;
	char placa1[15], placa2[15], placa3[15], modelo1[30], modelo2[15], modelo3[15], cor1[15], cor2[15], cor3[15], veic;
	printf("------------------\n");
	printf("Dados dos veiculos\n");
	printf("------------------\n");
	printf("Insira '0', '1', '2' ou '3' para adicionar 0, 1, 2 ou 3 veiculos: ");
	scanf(" %c",& veic);
	fflush(stdin);
	if (veic=='0'){
	}else {
		if (veic=='1'){
		   	printf("Insira a placa do 1° veiculo: ");
			scanf(" %[^\n]s",&placa1);
		    fflush(stdin);
		    printf("Insira o modelo do 1° veiculo: ");
		    scanf(" %[^\n]s",&modelo1);
		    fflush(stdin);
		    printf("Insira o ano do 1° veiculo: ");
		    scanf(" %d",&ano1);
		    fflush(stdin);
		    while(ano1 > 2023 || ano1 < 1903){
		    	printf("O ano inserido é invalido, isira novamente um ano entre 1903 e 2023: ");
		    	scanf(" %d",&ano1);
		    	fflush(stdin);
			}
		    fflush(stdin);
		    printf("Insira a cor do 1° veiculo: ");
		    scanf(" %[^\n]s",&cor1);
		    fflush(stdin);
		}else {
			if (veic=='2'){
		    	printf("Insira a placa do 1° veiculo: ");
		    	scanf(" %[^\n]s",&placa1);
			    printf("Insira o modelo do 1° veiculo: ");
			    scanf(" %[^\n]s",&modelo1);
			    printf("Insira o ano do 1° veiculo: ");
			    scanf(" %d",&ano1);
			    while(ano1 > 2023 || ano1 < 1903){
			    	printf("O ano inserido é invalido, isira novamente um ano entre 1903 e 2023: ");
			    	scanf(" %d",&ano1);
	   				fflush(stdin);
				}
			    printf("Insira a cor do 1° veiculo: ");
			    scanf(" %[^\n]s",&cor1); 
			    printf("Insira a placa do 2° veiculo: ");
			    scanf(" %[^\n]s",&placa2);
			    printf("Insira o modelo do 2° veiculo: ");
			    scanf(" %[^\n]s",&modelo2);
			    printf("Insira o ano do 2° veiculo: ");
			    scanf(" %d",&ano2);
			    while(ano2 > 2023 || ano2 < 1903){
			    	printf("O ano inserido é invalido, isira novamente um ano entre 1903 e 2023: ");
			    	scanf(" %d",&ano2);
					fflush(stdin);
				}
			    printf("Insira a cor do 2° veiculo: ");
			    scanf(" %[^\n]s",&cor2);
	    	}else {
	    		if (veic=='3'){
	    		printf("Insira a placa do veiculo 1: ");
		    	scanf(" %[^\n]s",&placa1);
			    printf("Insira o modelo do veiculo 1: ");
			    scanf(" %[^\n]s",&modelo1);
			    printf("Insira o ano do veiculo 1: ");
			    scanf(" %d",&ano1);
			    while(ano1 > 2023 || ano1 < 1903){
			    	printf("O ano inserido é invalido, isira novamente um ano entre 1903 e 2023: ");
			    	scanf(" %d",&ano1);
	    			fflush(stdin);
				}
			    printf("Insira a cor do veiculo 1: ");
			    scanf(" %[^\n]s",&cor1); 
			    printf("Insira a placa do veiculo 2: ");
			    scanf(" %[^\n]s",&placa2);
			    printf("Insira o modelo do veiculo 2: ");
			    scanf(" %[^\n]s",&modelo2);
			    printf("Insira o ano do veiculo 2: ");
			    scanf(" %d",&ano2);
			    while(ano2 > 2023 || ano2 < 1903){
			    	printf("O ano inserido é invalido, isira novamente um ano entre 1903 e 2023: ");
			    	scanf(" %d",&ano2);
	   				fflush(stdin);
				}
			    printf("Insira a cor do veiculo 2: ");
			    scanf(" %[^\n]s",&cor2);
			    printf("Insira a placa do veiculo 3: ");
			    scanf(" %[^\n]s",&placa3);
			    printf("Insira o modelo do veiculo 3: ");
			    scanf(" %[^\n]s",&modelo3);
			    printf("Insira o ano do veiculo 3: ");
			    scanf(" %d",&ano3);
			    while(ano3 > 2023 || ano3 < 1903){
			    	printf("O ano inserido é invalido, isira novamente um ano entre 1903 e 2023: ");
			    	scanf(" %d",&ano3);
	    			fflush(stdin);
				}
			    printf("Insira a cor do veiculo 3: ");
			    scanf(" %[^\n]s",&cor3);
				}else {
					printf("O valor inserido e invalido, nenhum veiculo sera adicionado!!!");
				}
			}
		}		
	}
	printf("DADOS DO CREDENCIADO\n");
	printf("Razao social e Nome completo:\n\n");
    printf("%.34s\n\n", rSociall);
    printf("%.34s\n\n", nome);
    printf("Endereco:\n");
    printf("%s\n\n", endereco);
    printf("Numero:\n");
    printf("%.5s\n\n", nEndereco);
    printf("Complemento:\n");
    printf("%.50s\n\n", cEndereco);
    printf("Bairro:\n");
    printf("%.50s\n\n", bairro);
    printf("CEP:\n");
    printf("%s\n\n", cep);
    printf("Estado:\n");
    printf("%s\n\n", estado);
    printf("Cidade:\n");
    printf("%s\n\n", cidade);
    printf("DDD:\n");
    printf("%d\n\n", dddtrc);
    printf("Telefone Residencial ou Comercial:\n");
    printf("%d\n\n", telefonerc);
    printf("DDD:\n");
    printf("%d\n\n", dddtc);
    printf("Telefone Celular:\n");
    printf("%d\n\n", telefonec);
    printf("CPF:\n");
    printf("%s\n\n", cpf);
    printf( "%c",pj);
    printf("CNPJ(preenchimento exclusivo para PJ):\n");
    printf("%s\n\n", cnpj);
	printf("Insc. Estadual(preenchimento exclusivo para PJ):\n");
	printf("%s\n\n", inscricaoE);
	printf("Insc. Municipal(preenchimento exclusivo para PJ):\n");
	printf("%s\n\n", inscricaoM);
	printf("CNAE(preenchimento exclusivo para PJ):\n");
	printf("%s\n\n", cnae);
	printf("Data de nascimento:\n");
    printf("%s\n\n", dataNascimento);
    if (boletos=='s'){
    	printf("Deseja receber os proximos boletos por e-mail?\n");
    	printf("sim\n\n");
    }else{
    	printf("Deseja receber os proximos boletos por e-mail?\n");
    	printf("nao\n\n");
	}
    printf("Email:\n");
    printf("%s\n\n", email);
	printf("Contato de responsavel(em caso de Pessoa Juridica):\n");
	printf("%s\n\n", telefoner);
    printf("Telefone comercial:\n");
    printf("%d\n\n", telefoneco);
    printf("Data:\n");
    printf("%s\n\n", data);
	printf("DADOS DOS VEICULOS\n\n");
    if (veic=='1'){
    	printf("Placa       Modelo                              Ano    Cor\n");
    	printf("%.7s   %.22s   %.4d   %.11s\n", placa1, modelo1, ano1, cor1);
    	printf("Placa       Modelo                      Ano    Cor\n");
		printf("_______     ____________________        ____   ___________\n");
		printf("Placa       Modelo                      Ano    Cor\n");
		printf("_______     ____________________        ____   ___________\n");
	}else{
		if (veic=='2'){
			printf("Placa       Modelo                              Ano    Cor\n");
    		printf("%.7s   %.22s   %.4d   %.11s\n", placa1, modelo1, ano1, cor1);
			printf("Placa       Modelo                              Ano    Cor\n");
			printf("%.7s   %.22s   %.4d   %.11s\n", placa2, modelo2, ano2, cor2);
			printf("Placa       Modelo                      Ano    Cor\n");
			printf("_______     ____________________        ____   ___________\n");
		}else{
			if (veic=='3'){
					printf("Placa       Modelo                              Ano    Cor\n");
	    			printf("%.7s   %.22s   %.4d   %.11s\n", placa1, modelo1, ano1, cor1);
					printf("Placa       Modelo                              Ano    Cor\n");
					printf("%.7s   %.22s   %.4d   %.11s\n", placa2, modelo2, ano2, cor2);
					printf("Placa       Modelo                              Ano    Cor\n");
					printf("%.7s   %.22s   %.4d   %.11s\n", placa3, modelo3, ano3, cor3);
			}else{
					printf("Placa       Modelo                      Ano    Cor\n");
					printf("_______     ____________________        ____   ___________\n");
					printf("Placa       Modelo                      Ano    Cor\n");
					printf("_______     ____________________        ____   ___________\n");
					printf("Placa       Modelo                      Ano    Cor\n");
					printf("_______     ____________________        ____   ___________\n");
			}	
		}
	}
}

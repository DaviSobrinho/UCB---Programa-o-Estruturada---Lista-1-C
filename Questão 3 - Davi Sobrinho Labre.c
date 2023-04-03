#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char nome_completo[100], nome_completo_holder[100],delim[] = " ",iniciais_holder[100];
	int  i = 0, j = 0, k = 0, l = 0,m = 0, ptrlen = 0, ultlen = 0, boolean = 1;
	printf("Ola, para receber seu nome formatado em citacao cientifica, por favor insira seu nome completo:");
	scanf(" %[^\n]s",& nome_completo);
	strcpy(nome_completo_holder,nome_completo);
	char *ptr = strtok(nome_completo, delim), *ultimo_nome;
	while(i < 100){
		if(ptr != NULL){
			i++;
			ultimo_nome = ptr;
			ptr = strtok(NULL, delim);
		}else{
			i = 100;
		}
	}
	while(j< strlen(nome_completo_holder)){
		if(boolean == 1 && nome_completo_holder[j] != ' '){
			iniciais_holder[m] = toupper(nome_completo_holder[j]);
			m++;
			iniciais_holder[m] = ',';
			m++;
			boolean = 0;
		}
		if(nome_completo_holder[j] == ' '){
			boolean = 1;
		}
		j++;
	}
	if(iniciais_holder[strlen(iniciais_holder)-2] == ','){
		iniciais_holder[strlen(iniciais_holder)-2] = '\0';
	}
	if(iniciais_holder[strlen(iniciais_holder)-1] == ','){
		iniciais_holder[strlen(iniciais_holder)-1] = '\0';
	}
	ultlen = strlen(ultimo_nome);
	for(k = 0; k < ultlen; k++){
		ultimo_nome[k] = toupper(ultimo_nome[k]);
	}
	printf("Nome formatado como citacao cientifica: %s,%s.", ultimo_nome, iniciais_holder);
	return 0;
}

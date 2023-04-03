#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void le_valida_rotacao();
int rot=0;

int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	
    char texto[100] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'u', 'v', 'w', 'x', 'y', 'z',
	'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',};
	char x;
	int i, j, textlen;
	
  	printf("CIFRA DE CESAR\n\n");
  
	printf("Digite o texto (Ate 20 caracteres): ");
	scanf("%[^\n]", texto);
	textlen = strlen(texto);
	le_valida_rotacao();
	
	for(i = 0; texto[i] != '\0'; i++) {
		x = texto[i];
		
		if(x >= 'a' && x <= 'z'){
			x = x + rot;
			
			if (x > 'z') {
				x = x - 'z' + 'a'-1;
			}
			
			texto[i] = x;
		}
		if(x >= 'A' && x <= 'Z'){
			x = x + rot;
			
			if (x > 'z') {
				x = x - 'z' + 'a'-1;
			}
			
			texto[i] = x;
		}
	}
	
	printf("\nMensagem criptografada: %s ", texto);
		
	
	return 0;
}
void le_valida_rotacao(){

	printf("\n\t Quantidade de rotacoes (1 a 5): ");
	scanf("%i", &rot);
	while(rot > 5 || rot < 1){
		printf("\n\t ***ERRO, INFORME UMA ROTAÇÃO ENTRE 1 E 5!***\n");
		scanf("%i", &rot);
	}
}

#include <stdio.h>
#include <stdlib.h>

void menu();
void sair();
void soma();
void subtracao();
void multiplicacao();
void divisao();
int opcao, num1, num2;
float som, sub, multi, divi;

int main() {
    
    do {
        menu();
    
    if(opcao > 0 && opcao < 5){
       printf("Digite um numero: ");
       scanf("%d",&num1);
       
       printf("Digite outro numero: ");
       scanf("%d",&num2);
    } 

        switch(opcao){
        case 0:
        	
            sair();
            system("exit");
            break;
          
        case 1:
        	
            soma();
			system("pause");
			system("cls"); 
            
            break;
          
        case 2:
          
          	subtracao();
          	system("pause");
			system("cls"); 
          
            break;
          
        case 3:
            
          	multiplicacao();
          	system("pause");
			system("cls"); 
          	
            break;
          
        case 4:
           
         	divisao();
         	system("pause");
			system("cls"); 
         	 
             break;
             
        default:
            printf("Opcao invalida.\nDigite outra opcao: \n");
            menu();
        }
    } while(opcao != 0);
}


void menu(){

  printf("\n\tCALCULADORA");
  
  printf("\n\n1 - +\n2 - -\n3 - *\n4 - /\n0 -   Sair\n\n");
  scanf("%d", &opcao);
  system("cls");
}

void sair(){
  
  printf("Saindo...\n");

}

void soma(){
  som = num1 + num2;
  printf("Soma: %0.2f\n", som);
  
}

void subtracao(){
  sub = num1 - num2;
  printf("Subtracao: %0.2f\n", sub);
  
}

void multiplicacao(){
  multi = num1 * num2;
  printf("Multiplicacao: %0.2f\n", multi);
  
}

void divisao(){
  divi = num1 / num2;
  printf("Divisao: %0.2f\n", divi); 
  
}


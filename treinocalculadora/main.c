#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int n1,n2,opcao;
    setlocale(LC_ALL,"Portuguese");
    printf("\nOlá sou uma calculadora, tecle 1 para somar, 2 para subtrair, 3 para multiplicar, 4 para dividir, 5 para encerrar o aplicativo\n");
	scanf("%d", &opcao);
	
	if(opcao==1){
	printf("\nOlá, estou aqui para somar\n");
	system("pause");
	system("cls");
	printf("Digite o primeiro número ");
	scanf("%d", &n1);
	printf("Digite o segundo número ");
	scanf("%d", &n2);
	printf("\nA soma é igual a:  %d\n", n1+n2);	
	main(0,0);
	return 0;
}
  if(opcao==2){
	printf("\nOlá, estou aqui para subtrair\n");
	system("pause");
	system("cls");
	printf("Digite o primeiro número ");
	scanf("%d", &n1);
	printf("Digite o segundo número ");
	scanf("%d", &n2);
	printf("\nA subtração é igual a:  %d\n", n1-n2);	
	main(0,0);
	return 0;
   }
    if(opcao==3){
	printf("\nOlá, estou aqui para multiplicar\n");
	system("pause");
	system("cls");
	printf("Digite o primeiro número ");
	scanf("%d", &n1);
	printf("Digite o segundo número ");
	scanf("%d", &n2);
	printf("\nA multiplição é igual a:  %d\n", n1*n2);
	main(0,0);	
	return 0;
	}
	if(opcao==4){
	printf("\nOlá, estou aqui para dividir\n");
	system("pause");
	system("cls");
	printf("Digite o primeiro número ");
	scanf("%d", &n1);
	printf("Digite o segundo número ");
	scanf("%d", &n2);
	printf("\nA divisão é igual a: %d\n", n1/n2);
	main(0,0);	
	return 0;
	}
	if(opcao==5){
	printf("Espero ter ajudado, até a próxima. :)");
    return;
}
    else{
    printf("\nDesculpe não entendi, pode repetir ?\n");	
	}
	main(0,0);
}


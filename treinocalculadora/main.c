#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int n1,n2,opcao;
    setlocale(LC_ALL,"Portuguese");
    printf("\nOl� sou uma calculadora, tecle 1 para somar, 2 para subtrair, 3 para multiplicar, 4 para dividir, 5 para encerrar o aplicativo\n");
	scanf("%d", &opcao);
	
	if(opcao==1){
	printf("\nOl�, estou aqui para somar\n");
	system("pause");
	system("cls");
	printf("Digite o primeiro n�mero ");
	scanf("%d", &n1);
	printf("Digite o segundo n�mero ");
	scanf("%d", &n2);
	printf("\nA soma � igual a:  %d\n", n1+n2);	
	main(0,0);
	return 0;
}
  if(opcao==2){
	printf("\nOl�, estou aqui para subtrair\n");
	system("pause");
	system("cls");
	printf("Digite o primeiro n�mero ");
	scanf("%d", &n1);
	printf("Digite o segundo n�mero ");
	scanf("%d", &n2);
	printf("\nA subtra��o � igual a:  %d\n", n1-n2);	
	main(0,0);
	return 0;
   }
    if(opcao==3){
	printf("\nOl�, estou aqui para multiplicar\n");
	system("pause");
	system("cls");
	printf("Digite o primeiro n�mero ");
	scanf("%d", &n1);
	printf("Digite o segundo n�mero ");
	scanf("%d", &n2);
	printf("\nA multipli��o � igual a:  %d\n", n1*n2);
	main(0,0);	
	return 0;
	}
	if(opcao==4){
	printf("\nOl�, estou aqui para dividir\n");
	system("pause");
	system("cls");
	printf("Digite o primeiro n�mero ");
	scanf("%d", &n1);
	printf("Digite o segundo n�mero ");
	scanf("%d", &n2);
	printf("\nA divis�o � igual a: %d\n", n1/n2);
	main(0,0);	
	return 0;
	}
	if(opcao==5){
	printf("Espero ter ajudado, at� a pr�xima. :)");
    return;
}
    else{
    printf("\nDesculpe n�o entendi, pode repetir ?\n");	
	}
	main(0,0);
}


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int n1,n2;    
	setlocale(LC_ALL,"Portuguese");
    printf("Olá, estou aqui para somar números. c: \n");
    system("pause");
    system("cls");
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("A soma dos números é igual a: %d \n", n1+n2);
    system("pause");
    system("cls");
    printf("Te amo Dudinha <3 \n");
	return 0;
}

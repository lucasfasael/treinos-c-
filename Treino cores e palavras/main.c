//as linhas abaixo "chamam" as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//a linha abaixo configura o idioma
	setlocale(LC_ALL,"Portuguese");
	system("color 1D");
    printf("Te amo Dudinha \n");
    system("pause");
    system("cls");
	return 0;
}

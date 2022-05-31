#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int idade;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	printf("idade: %d",idade);
	
    return 0;
}

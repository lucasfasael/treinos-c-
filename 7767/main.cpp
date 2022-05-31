#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL,"Portuguese");
int n [20];
int x = 0;
int y = 0;
float soma;
float media;
bool condicao = true;
    
    while(condicao){
    	x++;
    	cout << "Digite números, irei parar quando você digitar 0, irei te dizer a quantidade, o maior e a média" << endl;
    	cin >> n[x];
    	soma = soma+n[x];
    	if(n[x]>y){
    	y = n[x];
		}
    	if(n[x]==0){
    	media = soma/(x-1);
    	cout << "Você digitou: " << x-1 << " números, o maior deles é: " << y << " e a média dos números é: " << media;
    	condicao = false;
		}
	}
	
	return 0;
}

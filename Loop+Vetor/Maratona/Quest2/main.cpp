#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL,"Portuguese");
int n [10];
float soma = 0;
int tam = 0;
float igual = 0;
float menor = -1;
float maior = -1;
float media;
bool condicao = true;
int x;

    for(x=0; x<10; x++){
    	cout << "Digite o " << x+1 << " valor: ";
    	cin >> n[x];
    	soma = soma+n[x];
	}
	media = soma/x;
	while(condicao){
	if(tam>10){
		condicao = false;
	}
	if(media==n[tam]){
	    igual++;
      }
       if(media>n[tam]){
    	  menor++;
	    }
	      if(media<n[tam]){
		    maior++;
         	}
              tam++;
            }
    cout << "A média é: " << media << ", " "tem: " << maior << " números maiores que a média." << "Tem: " << menor << " números menores que a média." << "Tem: " << igual << " números iguais a média.";
	return 0;

}

#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL,"Portuguese");
int n[10];
bool condicao = true;
int z;
int y;
int tam = 0;
    for(int x=0; x<10; x++){
    	cout << "Digite os valores: ";
    	cin >> z;
        tam = 0;
        condicao = true;
    		while(condicao){
    			if(tam>=10){
			    	condicao = false;
				}
    			if(z==n[tam]){
    			cout << "Não pode ter números repetidos, digite outro: ";
    			cin >> y;
    			n[x] = y;
    			tam = tam+1;
			}
			    else{
			    	tam = tam+1;
				}
		}
		            if(y!=n[x]){
		               n[x] = z;
		               cout << "A lista N recebe na casa: " << x << " o valor de: " << z << endl;
		           }
	}
	for(int h=0; h<10; h++){
		cout << "A lista fica em " << h << "°: " << n[h] << endl;
	}
	return 0;
}


#include <iostream>
#include <locale>
using namespace std;

int main() {
setlocale(LC_ALL,"Portuguese");
int n [10];
int tam = 0;
int y = -9999;
int z = 10000;
bool condicao = true;
    
    while(condicao){
    	cout << "Digite o " << tam+1 << "� n�mero: ";
    	cin >> n[tam];
    	if(tam>=9){
    		condicao = false;
		}
		if(n[tam]>y){
			y = n[tam];
			cout << "Agora " << y << " � o maior n�mero." << endl;
		}
		if(n[tam]<z){
			z = n[tam];
			cout << "Agora " << z << " � o menor n�mero." << endl;
			
		}
		tam++;
	}
    
	return 0;
}

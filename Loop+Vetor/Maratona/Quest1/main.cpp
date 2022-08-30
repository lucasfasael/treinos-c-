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
    	cout << "Digite o " << tam+1 << "° número: ";
    	cin >> n[tam];
    	if(tam>=9){
    		condicao = false;
		}
		if(n[tam]>y){
			y = n[tam];
			cout << "Agora " << y << " é o maior número." << endl;
		}
		if(n[tam]<z){
			z = n[tam];
			cout << "Agora " << z << " é o menor número." << endl;
			
		}
		tam++;
	}
    
	return 0;
}

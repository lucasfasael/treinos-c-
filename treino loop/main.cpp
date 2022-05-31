#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
    for(int x=1; x<11; x = x+1){
    int meu_valor;
    
        cout << "Digite o "<< x << " seu valor" << endl;
    	cin >> meu_valor;
    	if(meu_valor>=10 && meu_valor<=20){
    	cout << "Meu valor está no intervalo" << endl;
		}
		else{
		cout << "Não está no intervalo" << endl;
    }
	}
}

#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
int n, soma;
int soma2 = 0;
    for(int x=1; x<=10; x++){
    cout << "Digite um n�mero: " << endl;
    cin >> n;
    if(n>=10 && n<=20){
    soma = soma+1;
    cout << "O n�mero: " << n << " , est� no intervalo." << endl;
	}
	else{
	soma2 = soma2+1;
	cout << "O n�mero: " << n << " , n�o est� no intervalo." << endl;
	}
	cout << "Est�o no intervalo: " << soma << " n�meros" << endl << "N�o est�o no intervalo: " << soma2 << " n�meros" << endl;
	}
	return 0;
}

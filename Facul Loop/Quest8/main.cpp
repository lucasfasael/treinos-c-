#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
int n, soma;
int soma2 = 0;
    for(int x=1; x<=10; x++){
    cout << "Digite um número: " << endl;
    cin >> n;
    if(n>=10 && n<=20){
    soma = soma+1;
    cout << "O número: " << n << " , está no intervalo." << endl;
	}
	else{
	soma2 = soma2+1;
	cout << "O número: " << n << " , não está no intervalo." << endl;
	}
	cout << "Estão no intervalo: " << soma << " números" << endl << "Não estão no intervalo: " << soma2 << " números" << endl;
	}
	return 0;
}

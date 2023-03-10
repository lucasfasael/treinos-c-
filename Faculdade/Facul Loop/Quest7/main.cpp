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
    if(n%2==0){
    soma = soma+1;
    cout << n << " é par." << endl;
	}
    else{
	soma2 = soma2+1;
	cout << n << " é impar." << endl;
	}
	cout << "Quantidades de pares: " << soma << endl << "Quantidades de impares: " << soma2 << endl;
	}
	return 0;
}

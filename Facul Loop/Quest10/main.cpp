#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
int n, soma;
    for(int x=1; x<=3; x++){
    cout << "Digite a sua nota: ";
    cin >> n;
    soma = soma+n;
	}
	cout << "A sua média é: " << soma/3;
	return 0;
}

#include <iostream>
using namespace std;
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
int senha;
    cout << "\nPara continuar � necess�rio digitar a senha: ";
    cin >> senha;
if (senha==1234){
	cout << "\nACESSO PERMITIDO MOTHERFUCKER";
}
else{
	cout << "\nAQUI N�O � SEU LUGAR VACIL�O, ACERTE A SENHA !";
}
	return 0;
}

#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
int quantidade;
float valor;
    cout << "\nOl�, estou aqui para calcular suas compras. ";
    system ("pause");
    system ("cls");
    cout << "\n Quantas ma��s voc� quer ? ";
    cin >> quantidade;
if (quantidade>=12){
	valor = 0.25;
	cout << "\nSuas ma��s deram um total de: R$ " << valor*quantidade;
}
else{
	valor = 0.30;
	cout << "\nSuas ma��s deram um total de: R$ " << valor*quantidade;
}
return 0;
}


#include <iostream>
using namespace std;
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
float n1;   
	cout << "\nIrei dobrar os n�meros positivos e triplicar os negativos " << endl;
    system ("pause");
    system ("cls");
    cout << "\nQual o seu n�mero?: ";
	cin >> n1;
if (n1<0){
	n1 = n1*3;
	cout << "\nO triplo do seu n�mero negativo �: " << n1;
}	
if (n1>0){
	n1 = n1*2;
	cout << "\nO dobro do seu n�mero positivo �: " << n1;
}
	return 0;
}

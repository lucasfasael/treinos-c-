#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
int n1;	
	setlocale(LC_ALL,"Portuguese");
	cout << "\nOl�, estou aqui para dizer se o seu n�mero � par ou impar." << endl;
	system ("pause");
	system ("cls");
	cout << "\nDigite o seu n�mero: ";
	cin >> n1;
if (n1%2==0){
	cout << "O seu n�mero � par. ";
}
else{
	cout << "O seu n�mero � impar.  ";
}
	return 0;
}

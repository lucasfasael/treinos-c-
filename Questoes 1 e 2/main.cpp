#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
int n1;	
	setlocale(LC_ALL,"Portuguese");
	cout << "\nOlá, estou aqui para dizer se o seu número é par ou impar." << endl;
	system ("pause");
	system ("cls");
	cout << "\nDigite o seu número: ";
	cin >> n1;
if (n1%2==0){
	cout << "O seu número é par. ";
}
else{
	cout << "O seu número é impar.  ";
}
	return 0;
}

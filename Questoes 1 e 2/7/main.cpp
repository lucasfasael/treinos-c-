#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
setlocale(LC_ALL,"Portuguese");
float altura, sexo, peso;
    cout << "\nOlá estou aqui para dizer o seu peso ideal.";
    system ("pause");
    system ("cls");
    cout << "\nFavor informar o seu sexo, 1 homem, 2 mulher: ";
    cin >> sexo;
    cout << "\nFavor informar a sua altura: ";
    cin >> altura;
if (sexo==1){
	peso = 72.7*altura-58;
	cout << "\nEae cara, seu peso ideal é: " << peso;
	return 0;
}
if (sexo==2){
	peso = 62.1*altura-44.7;
	cout << "\nOi gatinha, seu peso ideal é: " << peso;
	return 0;
}
	
	return 0;
}

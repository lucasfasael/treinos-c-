#include <iostream>
using namespace std;
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
setlocale(LC_ALL,"Portuguese");
string nome, sexo, civil;
    cout << "\nOlá estou aqui para coletar dados. ";
    system ("pause");
    system ("cls");
    cout << "\nFavor me informe o seu nome: ";
    cin >> nome;
    cout << "\nFavor me informe o seu sexo M ou F ";
    cin >> sexo;
    cout << "\nFavor me informe o seu estado civil ";
    cin >> civil;
if (civil=="casada"){
	cout << "\nQuantos anos de casada?: ";
}
	return 0;
}

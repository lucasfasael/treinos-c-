#include <iostream>
using namespace std;
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
setlocale(LC_ALL,"Portuguese");
float n1,n2,n3, media;
    cout << "\nEstou aqui para dizer a sua m�dia." << endl;
    system ("pause");
    system ("cls");
    cout << "\nInforme as tr�s notas respectivamente: ";
    cin >> n1 >> n2 >> n3;
    media = (n1+n2+n3)/3;
	cout << "Sua m�dia �: " << media;
	return 0;
}

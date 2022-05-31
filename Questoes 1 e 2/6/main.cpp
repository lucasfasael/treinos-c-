#include <iostream>
using namespace std;
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
setlocale(LC_ALL,"Portuguese");
int n1, n2, n3;
    cout << "\nEstou aqui para escrever números em ordem crescente. ";
    system ("pause");
    system ("cls");
    cout << "\nDigite o primeiro número: ";
    cin >> n1;
    cout << "\nDigite o segundo número: ";
    cin >> n2;
    cout << "\nDigite o terceiro número: ";
    cin >> n3;
if (n1>n2|n2>n3){
	cout << n1 << " > " << n2 << " > " << n3;
	system ("pause");
	system ("cls");
}
if (n2>n1|n1>n3){
	cout << n2 << " > " << n1 << " > " << n3;
}
if (n3>n2|n1>n2){
	cout << n3 << " > " << n1 << " > " << n2;
}
if (n1>n3|n3>n2){
	cout << n1 << " > " << n3 << " > " << n2;
}
if (n2>n3|n3>n1){
	cout << n2 << " > " << n3 << " > " << n1;
}
if (n3>n2|n2>n1){
	cout << n3 << " > " << n2 << " > " << n1;
}
	return 0;
}

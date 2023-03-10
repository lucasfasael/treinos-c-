#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");

int n;
    cout << "Irei te dizer a tabuada de um número entre 1 e 10, informe o número: ";
    cin >> n;
    if(n>=1 && n<=10)
    for(int x=1; x<=10; x++){
    cout << n << " x " << x << " = " << n * x << endl;
	}
	else{
	cout << "O número: " << n << " não está entre 1 e 10" << endl;
	main (0, 0);
	}
	return 0;
}

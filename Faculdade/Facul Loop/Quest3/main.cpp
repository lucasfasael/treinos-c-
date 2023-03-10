#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");

int n1, n2;
    cout << "Irei te dizer qual dos 2 números é maior, informe os dois números respectivamente : ";
    cin >> n1 >> n2;
    if(n1>n2){
    cout << n1 << " > " << n2 << endl;
    main (0, 0);
	}
	if(n2>n1){
	cout << n2 << " > " << n1 << endl;
	main (0, 0);
	}
	else{
	cout << "Os números são iguais." << endl;
	main (0, 0);
	}
	return 0;
}

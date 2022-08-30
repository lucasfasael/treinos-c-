#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL,"Portuguese");
int n[6];
n[0]=1;
n[1]=0;
n[2]=5;
n[3]=-2;
n[4]=-5;
n[5]=7;
int soma = n[0] + n[1] + n[5];

    cout << "A soma é = " << soma<< endl;
    cout << "Antes n4 era: " << n[4] << endl;
    n[4] = 100;
    cout << "Agora n4 é: " << n[4];
	return 0;
}

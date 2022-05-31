#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
int n1;
    cout << "De qual número você quer a tabuada ?: ";
    cin >> n1;
	for(int x = 1; x<=9; x++){
		cout << "O seu valor " << n1 << "x" << x << " = " << x * n1 << endl;
	}
	return 0;
}

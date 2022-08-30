#include <iostream>
#include <locale>
using namespace std;

int main() {
setlocale(LC_ALL,"Portuguese");
int n[10];

    for(int x=0; x<10; x++){
    	cout << "Digite o " << x+1 << "° valor: ";
    	cin >> n[x];
	}
	for(int i=0; i<10; i++){
		cout << "A lista fica em " << i+1 << "° o valor: " << n[i] << endl;
	}
	return 0;
}

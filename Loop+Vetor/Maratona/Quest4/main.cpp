#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
int a[10];
int b[10];
int c[20];
int y = 0;
int w = 1;
    for(int x=0; x<10; x++){
    	cout << "Digite os valores da primeira lista: ";
    	cin >> a[x];
    	c[y] = a[x];
    	y = y+2;
	}
	for(int z=0; z<10; z++){
		cout << "Digite os valores da segunda lista: ";
		cin >> b[z];
		c[w] = b[z];
		w = w+2;
	}
	for(int h=0; h<20; h++){
		cout << "A nova lista fica em " << h << "°: "<< c[h] << endl;
	}
	return 0;
}

#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
    
    for(int x=1; x<=50; x++){
    cout << x << endl;
	}
	return 0;
}

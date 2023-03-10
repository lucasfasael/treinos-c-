#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");

    for(int x=1; x<=100; x++){
    if(x%2==0){
    cout << "O número: " << x << " é par." << endl;
	}
}
	return 0;
}

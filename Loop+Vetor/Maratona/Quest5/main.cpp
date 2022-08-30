#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL,"Portuguese");
int n[10];

    for(int x=0; x<10; x++){
    	cout << "Digite os valores: ";
    	cin >> n[x];
    	
          if(x%2==0){
          	cout << "Dobrou" << endl;
          	n[x] = n[x]*2;
		  }
		  else{
		  	cout << "Triplicou" << endl;
		  	n[x] = n[x]*3;
		  }
	}
	for(int z=0; z<10; z++){
	cout << "A nova lista fica na casa: " << z << "° = " << n[z] << endl;
}
	return 0;
}

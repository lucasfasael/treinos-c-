#include <iostream>
#include <locale>
using namespace std;

int main(){
setlocale(LC_ALL,"Portuguese");
int n [10];
int i;
int z;

     for(int x=0; x<10; x++){
     	z = 0;
     	cout << "Digite o valor " << x << "°: ";
     	cin >> z;
     		for(i=0; i<10; i++){
     			if(z==n[i]){
     			cout << "O número não pode ser igual a um já digitado, digite outro: " << endl;
     			cin >> n[x];
     		}
			 else{
			 	cout << "Você adicionou" << endl;
			 	n[x] = z;
			 }
		 }
	 }
}

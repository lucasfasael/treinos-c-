#include <iostream>
#include <locale>
using namespace std;

int main(){
setlocale(LC_ALL,"Portuguese");
int n[10];
int tam;
int z,y;
bool condicao = true;

    for(int x=0; x<10; x++){
    	cout << "Digite os números da lista: ";
    	cin >> z;
    	tam=0;
    	condicao = true;
    	while(condicao){
    		if(z==n[tam]){
    			cout << "Você não pode repetir números já digitados, digite outro valor substituto: ";
    			cin >> n[x];
    			y = n[x];
			}
			if(tam>=10){
				condicao = false;
			}
		    else{
		    	cout << "Tam recebeu um" << endl;
			   tam = tam+1;
	        }
                      }
 {
 	if(y!=n[x]){
         n[x] = z;
         cout << "Recebeu: " << n[x] << endl;
         cout << "O primeiro é: " << n[0] << " depois, " << n[1] << " e depois, " << n[2] << endl;
     }
 }
}
}

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
    	cout << "Digite os n�meros da lista: ";
    	cin >> z;
    	tam=0;
    	condicao = true;
    	while(condicao){
    		if(z==n[tam]){
    			cout << "Voc� n�o pode repetir n�meros j� digitados, digite outro valor substituto: ";
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
         cout << "O primeiro �: " << n[0] << " depois, " << n[1] << " e depois, " << n[2] << endl;
     }
 }
}
}

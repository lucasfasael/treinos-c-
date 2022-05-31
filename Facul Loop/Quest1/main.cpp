#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
double livros;

    cout << "Estou aqui para dar descontos baseado na quantidade de livros, quantos livros são ?";
    cin >> livros;
double desconto1 = livros * 0.25 + 7.50;
double desconto2 = livros * 0.50 + 2.50;
    if(desconto1<desconto2){
    cout << "A compra com o primeiro desconto fica mais barata totalizando: R$ " << desconto1;
	}
	if(desconto2<desconto1){
	cout << "A compra com o segundo desconto fica mais barata totalizando: R$ " << desconto2;
	}
	else{ 
	cout << "Os descontos são iguais: " << desconto1 << "=" << desconto2;
	}
	return 0;
}

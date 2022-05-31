#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");

int n,y;
bool condicao = true;

    cout << "Digite um número para que seu amigo posso advinhar: ";
    cin >> n;
    system("cls");
    while(condicao){
    cout << "Advinhe o número digitado: ";
    cin >> y;
    if(y!=n){
    cout << "Você errou, tente novamente!" << endl;
	}
    if(y==n){
    condicao = false;
    cout << "Parabéns, você acertou.";
	}
	}
    {
	  return 0;
    }
}


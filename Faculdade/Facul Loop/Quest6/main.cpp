#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
float idade, soma;
float media;

   for(float x=1; x<=10; x++){
   cout << "Digite uma idade: ";
   cin >> idade;
   soma = soma + idade;
   media = soma/x;
   }
   cout << "A média é de: " << media;
return 0;
}

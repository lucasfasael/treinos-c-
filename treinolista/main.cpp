#include <iostream>
#include <locale>
#include <list>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
    
string nomes[50];
string comando;
bool condicao = true;
int x = 0;
string y;

    cout << "Irei armazenar os nomes que você quiser !";
    system("pause");
    system("cls");
    while(condicao){
    	cout << "Digite qualquer tecla para continuar, 'sair' para encerrar, 'remover' para remover o último nome digitado: ";
        cin >> comando;
          if(comando=="sair"){
          cout << "Programa finalizado, até a próxima. :)";
    	  condicao = false;
	      }
	      if(comando=="remover"){
	      cout << "Último nome : " << nomes[x] << " removido." << endl;
	      x--;
		  }
	      else{
    	    cout << "Digite o " << x+1 << "° nome: ";
    	    cin >> nomes[x];
    	    cout << "Você digitou: " << nomes[x] << endl;
        	x++;
            }
	
	//cout << "Tamanho da lista: " << aula.size() << endl;
	
	//tam=aula.size();
	//for(int i=0; i<tam; i++){
	//	cout << aula.front() << endl;
	//	aula.pop_front();
	}
	return 0;
}

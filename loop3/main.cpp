#include <iostream>
#include <locale>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale(LC_ALL,"Portuguese");
    vector<int> tabuada;
    int n1;
    for(int x = 0; x<=10; x+=1){
    cout << "Digite o seu primeiro valor: ";
	cin >> n1;
	tabuada.push_back(n1);
	}
	cout << tabuada.size() << endl;
	for(int y = 0; y<=tabuada.size()-1; y+=1){
	cout << tabuada[y] << endl;
	if(tabuada[y]>=10 && tabuada[y]<=20){
	cout << "Esta dentro do intervalo" << endl;
	}
	else{
	cout << "Está fora" << endl;
	}	
	}
	
	return 0;
}

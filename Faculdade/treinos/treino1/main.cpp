#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;

int main(void) {
	
setlocale(LC_ALL,"Portuguese");
system("Color 3F");
struct aluno{
	char nome[50];
	char curso[50];
	long long matricula;
	double av1;
	double av2;
};

aluno estudantes[5];
	
	
	cout << endl;
	cout << "~ ~ ~.--------------------------------------------------------------------.~ ~ ~" << endl;
	cout << "--------------------------------- PROGRAM INIT ---------------------------------" << endl;	
	
	for(int x = 0; x<5; x++){
		cout << "Qual o nome do " << x+1 << "° aluno ? : ";
		cin >> estudantes[x].nome;
		cout << "Qual o curso do " << x+1 << "° aluno ? : ";
		cin >> estudantes[x].curso;
		cout << "Qual a matrícula do " << x+1 << "° aluno ? : ";
		cin >> estudantes[x].matricula;
		cout << "Qual a primeira nota do " << x+1 << "° aluno ? : ";
		cin >> estudantes[x].av1;
		cout << "Qual a segunda nota do " << x+1 << "° aluno ? : ";
		cin >> estudantes[x].av2;
		cout << endl;
	}
	for(int y = 0; y<5; y++){
		if(estudantes[y].av1 >= 4 & estudantes[y].av2 >= 4){
			cout << y+1 << " - O aluno " << estudantes[y].nome << " atende aos requisitos." << endl;
		}
		else{
			cout << y+1 << " -  O aluno " << estudantes[y].nome << " não atende aos requisitos." << endl;
		}
}
}

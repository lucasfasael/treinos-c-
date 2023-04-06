#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
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
	double media;
	double av3;
	char resultado[50];
};

aluno estudantes[2];
	
	
	cout << endl;
	cout << "~ ~ ~.--------------------------------------------------------------------.~ ~ ~" << endl;
	cout << "--------------------------------- PROGRAM INIT ---------------------------------" << endl;	
	
	for(int x = 0; x<2; x++){
		cout << "Qual o nome do " << x+1 << "° aluno ? : ";
		cin >> estudantes[x].nome;
		cout << "Qual o curso do " << x+1 << "° aluno ? : ";
		cin >> estudantes[x].curso;
		cout << "Qual a matrícula do " << x+1 << "° aluno ? : ";
		cin >> estudantes[x].matricula;
		cout << "Qual a primeira nota do " << x+1 << "° aluno ? : ";
		cin >> estudantes[x].av1;
		if(estudantes[x].av1 < 4){
			estudantes[x].av1 = 0;
		}
		cout << "Qual a segunda nota do " << x+1 << "° aluno ? : ";
		cin >> estudantes[x].av2;
		if(estudantes[x].av2 < 4){
			estudantes[x].av2 = 0;
		}
		estudantes[x].media = (estudantes[x].av1 + estudantes[x].av2) / 2;
		cout << endl;
	}
	for(int y = 0; y<2; y++){
		if((estudantes[y].av1 + estudantes[y].av2 ) / 2 >= 6){
			strcpy(estudantes[y].resultado, "APROVADO");
		}
		else{
			//cout << y+1 << " -  O aluno " << estudantes[y].nome << " NÃO tem média para ser aprovado." << endl;
			if(estudantes[y].av1 >= estudantes[y].av2){
				cout << "O aluno " << estudantes[y].nome << " precisará fazer a av3 para substituir a nota da av2 !" << endl;
				cout << "Qual a nota da av3 ? : ";
				cin >> estudantes[y].av3;
				cout << endl;
				if((estudantes[y].av3 + estudantes[y].av1) / 2 >= 6){
					strcpy(estudantes[y].resultado, "APROVADO");	
				}
				else{
					strcpy(estudantes[y].resultado, "REPROVADO");
				}
			}
			else{
				cout << "O aluno " << estudantes[y].nome << " precisará fazer a av3 para substituir a nota da av1 !" << endl;
				cout << "Qual a nota da av3 ? : ";
				cin >> estudantes[y].av3;
				cout << endl;
				if((estudantes[y].av3 + estudantes[y].av2) / 2 >= 6){
					strcpy(estudantes[y].resultado, "APROVADO");	
				}
				else{
					strcpy(estudantes[y].resultado, "REPROVADO");
				}
			}
		}
	}
	cout << endl;
	for(int z = 0; z < 2; z++){
		cout << z+1 << " - O aluno " << estudantes[z].nome << " foi " << estudantes[z].resultado << " !!!" << endl;
	}
}

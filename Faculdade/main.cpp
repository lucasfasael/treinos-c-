#include <iostream>
#include <locale>
#include <list>
using namespace std;

int main(void) {
setlocale(LC_ALL,"Portuguese");
    
struct aluno{
	long long matricula;
	char nome[50];
	char curso[50];
};

bool condicao = true;
aluno estudante[5];

for(int x=0; x<=5; x++){
cout << "\n" << "Digite o nome deste estudante: ";
cin >> estudante[x].nome;
cout << "Digite a matr�cula deste estudante: ";
cin >> estudante[x].matricula;
cout << "Digite o curso deste estudante: ";
cin >> estudante[x].curso;
cout << "\n" << "O nome do estudante �: " << estudante[x].nome << ", sua matr�cula �: " << estudante[x].matricula << " e o seu curso �: " << estudante[x].curso << endl;
for(int y=0; y<=x; y++){
	cout << "\n" << "O " << y+1 << "�  aluno �: " << estudante[y].nome << endl;
}
}

}



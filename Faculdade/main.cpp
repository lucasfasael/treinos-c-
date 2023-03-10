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
cout << "Digite a matrícula deste estudante: ";
cin >> estudante[x].matricula;
cout << "Digite o curso deste estudante: ";
cin >> estudante[x].curso;
cout << "\n" << "O nome do estudante é: " << estudante[x].nome << ", sua matrícula é: " << estudante[x].matricula << " e o seu curso é: " << estudante[x].curso << endl;
for(int y=0; y<=x; y++){
	cout << "\n" << "O " << y+1 << "°  aluno é: " << estudante[y].nome << endl;
}
}

}



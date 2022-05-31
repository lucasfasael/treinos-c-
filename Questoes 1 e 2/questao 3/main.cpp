#include <iostream>
using namespace std;
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
setlocale (LC_ALL,"Portuguese");
int dd,mm, aa;
    cout << "\nOlá, estou aqui para lhe informar se está apto para votar! " << endl;
    system ("pause");
    system ("cls");
    cout << "\nInforme o ano do seu nascimento: ";
    cin >> aa;
if (2022-aa>=16){
	cout << "Você está apto para votar !";
}
else{
	cout << "Você precisa crescer ! ";
}
    
	return 0;
}

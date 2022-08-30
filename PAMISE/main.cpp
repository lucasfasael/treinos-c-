#include <iostream>
#include <locale>
using namespace std;

int main() {
setlocale(LC_ALL,"Portuguese");
float valor;
int quantidade;
float n3;
float n4;
float n5;
bool condicao = true;

    while(condicao){
    condicao = true;
    cout << "Quantos produtos são ? : ";
    cin >> quantidade;
	cout << "Escolha o valor do produto: ";
    cin >> n3;
    n4 = quantidade*n3;
    n5 = n4 * 0.05;
    cout << "O valor do produto sem o IPI fica para o cliente: R$ " << n4 << ", O valor do produto com o IPI para empresa fica R$ " << n4+n5;
}
	return 0;
}

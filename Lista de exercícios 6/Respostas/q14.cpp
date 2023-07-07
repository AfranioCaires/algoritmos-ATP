#include <iostream>
#include <string.h>
using namespace std;
int main (){
	
	int qtdVogais, tamanho;
	
	char nome[51];
	cout << "digite uma palavra: ";
	cin.getline(nome, 51);
	
	tamanho = strlen(nome);
	
	int i = 0;
	
	while (i <= tamanho) {
		if (nome[i] == 'a' ||
			nome[i] == 'e' ||
			nome[i] == 'i' ||
			nome[i] == 'o' ||
			nome[i] == 'u') {
				qtdVogais++;
			}
			i++;
	}
	
	cout << "Quantidade de vogais: " << qtdVogais;
	
	return 0;
}

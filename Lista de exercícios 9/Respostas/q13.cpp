#include <iostream>
using namespace std;

void desenhaLinha (char borda, char meio, int tamanho){
	cout << borda;
	for(int i = 1; i <= tamanho - 2 ; i++)
		cout << meio;
	cout << borda << endl;
}

void quadrado(int tamanho){
	
	desenhaLinha('+', '-', tamanho);
	for(int  i = 1; i <= tamanho - 2; i++)
		desenhaLinha('|', ' ', tamanho);
		
	desenhaLinha('+', '-', tamanho);	
}

int main () {
	
	for(int i = 3; i < 10; i++){
		quadrado(i);
	}
	return 0;
}

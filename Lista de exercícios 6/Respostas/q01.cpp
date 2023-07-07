#include <iostream>
using namespace std;
int main () {
	
	char nome[51];
	cout << "digite seu nome: ";
	cin.getline(nome, 51);
	
	int i = 0;
	
	while (i <= 100) {
		cout << nome << endl;
		i++;
	}

	return 0;
}

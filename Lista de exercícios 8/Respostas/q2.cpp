#include <iostream>
#include <string.h>
using namespace std;

const int N = 51;

int main () {
	
	char input[N];
	
	cout << "Digite uma palavra: ";
	cin >> input;
	
	int soma = 0;
	int inputLen = strlen(input);
	
	for (int i = 0; i < inputLen; i++){
		soma += input[i];
	}
	
	cout << "A soma eh: " << soma;
	return 0;
}

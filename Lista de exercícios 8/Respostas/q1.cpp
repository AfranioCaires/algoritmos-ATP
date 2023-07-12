#include <iostream>
using namespace std;

const int N = 100;

int main () {
	
	int input[N];
	
	cout << "Digite " << N << " numeros: ";
	
	// loop para input de dados 
	for (int i = 0; i < N; i++){
		cin >> input[i];
	}
	
	// loop para realizar a soma dos pares
	int totalPares = 0;
	
	for (int i = 0; i < N; i++){
		if (input[i] % 2 == 0)
			totalPares++;
	}
	
	cout << "Dos " << N << " numeros digitados, "
		 << totalPares << " sao pares.";
		 
	return 0;
}

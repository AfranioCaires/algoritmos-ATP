#include <iostream>
using namespace std;

const int N = 10;

int main () {
	
	int inputArr[N];
	
	cout << "digite " << N << " numeros: ";
	
	for (int i = 0; i < N; i++)
		cin >> inputArr[i];
	
	cout << "Agora digite um numero X: ";
	
	int inputX;
	cin >> inputX;
	
	cout << "Os numeros que sao maiores ou iguais a "
		 << inputX << " sao: " << endl;
		 
	for (int i = 0; i < N; i++){
		if (inputArr[i] >= inputX)
			cout << inputArr[i] << " "; 
	} 

	return 0;
}

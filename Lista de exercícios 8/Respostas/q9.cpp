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
	
	bool presente = false;
	
	for (int i = 0; i < N; i++){
		if (inputX == inputArr[i])
			presente = true;
	} 
	
	(presente)?	cout << "Presente" :cout << "Ausente";
	return 0;
}

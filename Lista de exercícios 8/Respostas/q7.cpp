#include <iostream>
using namespace std;

const int N = 50;
int main () {
	
	int arrInput[N], arrEven = 0, arrOdd = 0;
	
	cout << "digite " << N << " numeros: ";
	
	for (int i = 0; i < N; i++)
		cin >> arrInput[i];
		

	for (int i = 0; i < N; i++){
		if (arrInput[i] % 2 == 0)
			arrEven++;
		else 
			arrOdd++;
	}
	
	cout << "pares: " << arrEven << endl
		 << "impares: " << arrOdd;
	
	return 0;
}

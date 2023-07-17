#include <iostream>
using namespace std;

const int N = 10;
int main () {
	
	int arrInput[N], arrEven[N];
	
	cout << "digite " << N << " numeros: ";
	
	for (int i = 0; i < N; i++)
		cin >> arrInput[i];
		

	cout << "pares: ";

	for (int i = 0; i < N; i++){
		if (arrInput[i] % 2 == 0)
			cout << arrInput[i] << " ";
	}
	
	return 0;
}

#include <iostream>
using namespace std;

const int N = 50;
int main () {
	
	int arrInput[N];
	
	cout << "digite " << N << " numeros: ";
	
	for (int i = 0; i < N; i++)
		cin >> arrInput[i];
		

	for (int i = N -1 ; i >= 0; i--)
		cout << arrInput[i] << " ";
	
	
	return 0;
}

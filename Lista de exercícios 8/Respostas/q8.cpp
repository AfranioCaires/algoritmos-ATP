#include <iostream>
using namespace std;

const int N = 50;

int main () {
	
	int inputArr[N];
	float mediaArr = 0;
	
	cout << "digite " << N << " numeros: ";
	
	for (int i = 0; i < N; i++){
	
		cin >> inputArr[i];	
		mediaArr += inputArr[i];
	}
	
	mediaArr /= N;
	
	cout << "A media e: " << mediaArr << endl
	 	 << "Os nummeros maiores que a media: ";
	
	for (int i = 0; i < N; i++){
		if (inputArr[i] > mediaArr){
			cout << inputArr[i] << " ";
		}
	}
	
	return 0;
}

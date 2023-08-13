#include <iostream>
using namespace std;

int tacografo(int I){
	
	int D = 0, T, V;
	
	for(int i = 0; i < I; i++) {
		cin >> T;
		cin >> V;
		D += T * V;
	}
	
	return D;
}

int main() {
	int I;
	cin >> I;
	
	cout << tacografo(I);
	
	return 0;
}

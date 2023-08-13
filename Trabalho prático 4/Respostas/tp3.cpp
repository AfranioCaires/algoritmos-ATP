#include <iostream>
using namespace std;

int calculaDiferenca (int a, int b){
   return (a - b);
}

int main() {
	int a, b;
	
	cin >> a;
	cin >> b;
	
	cout << calculaDiferenca (a, b);
	
	return 0;
}


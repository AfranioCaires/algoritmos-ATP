#include <iostream> 
using namespace std; 

int pecas(int peca){
	int total1 = 0, total2 = 0, ent;
	
	for (int i = 0; i <= peca; i++) 
		total1 += peca - i; 
	
	for (int i = 1; i < peca; i++){ 
		cin >> ent; 
		total2 += ent;  
	}
	
	return total1 - total2;
}

int main() {
	int peca; 
	cin >> peca; 
	
	cout << pecas(peca);
	
	return 0; 
}

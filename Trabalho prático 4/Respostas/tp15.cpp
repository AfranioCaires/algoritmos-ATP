#include <iostream> 
using namespace std; 

int gangorra(int peso1, int peso2, int comp1, int comp2){
	if (peso1 * comp1 == peso2 * comp2) 
		return 0;
	
	else if (peso1 * comp1 > peso2 * comp2)
		return -1;			
	
	else 
		return 1;
}
int main() { 
	int peso1, peso2, comp1, comp2; 
	cin >> peso1 >> comp1 >> peso2 >> comp2; 
	
	cout << gangorra(peso1, peso2, comp1, comp2);

	return 0; 
}

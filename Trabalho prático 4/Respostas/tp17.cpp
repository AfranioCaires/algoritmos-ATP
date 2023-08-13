#include <iostream> 
using namespace std;

int chocolate(int l){
	int total = 1;
	
	for (int i = l; i >= 2; i /=2)
		total *= 2;
	
	return total * total;
}

int main() { 
	int l; 
	cin >> l; 
 	
 	cout << chocolate(l);
	return 0; 
}

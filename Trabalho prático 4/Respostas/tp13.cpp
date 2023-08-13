#include <iostream> 
using namespace std; 

char cartas(int c1, int c2, int c3, int c4, int c5){
	
	if (c1 < c2 && c2 < c3 && c3 < c4 && c4 < c5)
		return 'C'; 
	
	else if (c1 > c2 && c2 > c3 && c3 > c4 && c4 > c5)
		return 'D';
	else
		return 'N'; 
}


int main() { 
	int c1, c2, c3, c4, c5; 
	cin >> c1 >> c2 >> c3 >> c4 >> c5; 
	
	cout << cartas(c1, c2, c3, c4, c5);
	
	return 0; 
}

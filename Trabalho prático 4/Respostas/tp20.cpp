#include <iostream> 
using namespace std; 

int soma(int input){
	int x, s = 0;
	
	for (int i = input; i >= 1; i--){ 
		cin >> x; 
		s += x; 
	}
	
	return s;
	
	
}

int main() { 
	int input = 0; 
	
	cin >> input; 
	cout << soma(input);
	
	return 0;
}

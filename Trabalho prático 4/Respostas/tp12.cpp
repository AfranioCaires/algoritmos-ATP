#include <iostream>  
using namespace std; 

int maior() {
	
	int n, maior = -1; 
 	do { 
 		cin >> n; 
 	
	 if(n > maior)
 		maior=n; 
 	} while( n != 0); 
	
	return maior;
}

int main(){ 
 	
 	cout << maior(); 
 	
 	return 0; 
}

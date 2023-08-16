#include <iostream>
using namespace std;

int divisores (int number) {
	int contador = 0;
	
	for (int i = 1; i <= number; i++){
		if(number % i == 0)
			contador++;
	}	
		
	return contador;
}	


 
int main (){
	int numero;
	cin >> numero;
	
	cout << divisores(numero);
	return 0;
}

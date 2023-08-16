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

bool primo(int number){
	if (divisores(number) != 2)
		return false;
	else 
		return true;
}


 
int main (){
	int numero;
	cin >> numero;
	
	cout << primo(numero);
	return 0;
}

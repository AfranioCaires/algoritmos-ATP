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

void primoIntervalo (int inicio, int fim){
	for (int i = inicio; i <= fim; i++){
		if(primo(i))
			cout << i << " ";
	}
}
 
int main (){
	
	primoIntervalo(1, 1000);
	
	
	return 0;
}

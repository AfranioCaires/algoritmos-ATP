#include <iostream>
using namespace std;
int main (){
	
	int numero, validador = 0;
	
	cout << "digite um numero:  ";
	cin  >> numero;
	
	
	int i = 1;
	
	while(i <= numero){
		if (numero % i  == 0){
			validador++;
		}
		i++;
	}
	
	(validador > 2)?
	cout << "nao eh primo":
	cout << "primo";
	
	return 0;
}

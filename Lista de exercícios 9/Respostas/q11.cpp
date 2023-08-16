#include <iostream>
using namespace std;

bool verificaOrdem(float vetor[], int tamanho){
	
	int contador = 0;
	
	for(int i = 0; i < tamanho - 1; i++){
		
		if (vetor[i] < vetor[i + 1])
			contador++;
	}

	if (contador == tamanho - 1)
		return true;
	else
		return false;
}

int main () {
	float vetor[5];
	
	vetor[0] = 0.1;
	vetor[1] = 0.2;
	vetor[2] = 0.3;
	vetor[3] = 0.4;
	vetor[4] = 0.5;
	
	if(verificaOrdem(vetor, 5))
		cout << "SIM";
	else
		cout << "NAO";
	
	return 0;
}
	



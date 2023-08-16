#include <iostream>
using namespace std;

void vetIntersec(int vetor1[], int vetor2[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if (vetor1[i] == vetor2[j])
				cout << vetor2[j];
		}
	}
}

int main () {
	
	int vet1[3];
	vet1[0] = 9;
	vet1[1] = 2;
	vet1[2] = 3;
	
	int vet2[3];
	vet2[0] = 4;
	vet2[1] = 1;
	vet2[2] = 2;
	
	
	vetIntersec(vet1, vet2, 3);
	return 0;
}

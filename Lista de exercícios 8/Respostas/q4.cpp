#include <iostream>
using namespace std;

const int N = 30;

int main () {
	
	int penultimoTermo = 0, ultimoTermo = 1, proximoTermo, soma = 1;
	
	for (int i = 3; i <= N; i++) {
		proximoTermo = penultimoTermo + ultimoTermo; 
		penultimoTermo = ultimoTermo; 
		ultimoTermo = proximoTermo; 
		
		soma += proximoTermo;
	}
	
	cout << "a soma dos " << N << " termos eh: " << proximoTermo;
	
	return 0;
}

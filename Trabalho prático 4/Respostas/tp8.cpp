#include <iostream>
using namespace std;

bool primo(int N){
	int verificador = 0;
	
	for (int i = 1; i <= N; i++){
		if (N % i == 0)
			verificador++;
	}
	
	if (verificador > 2)
		return false;
	
	else
		return true;
	
}

int main() {
	
	int N;
	cin >> N;
	
	if(primo(N))
		cout << "sim";
	else 
		cout << "nao";
	
	
	return 0;
}

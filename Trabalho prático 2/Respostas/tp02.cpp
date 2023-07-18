#include <iostream>
using namespace std;

int main () {
	
	// entrada do CPF
	char inputCPF[12];
	cin >> inputCPF;
	
	int dgt1 = inputCPF[9] - 48;
	int dgt2 = inputCPF[10] - 48;
	
	// modificando o valor e fazendo a multiplação 
	int soma1 = 0;
	for (int i = 0, j = 10; i < 11; i++, j--){
		inputCPF[i] -= 48;
		
		if (i == 9)
			break;
			
		soma1 += inputCPF[i] * j;
	}

	// encontrando o primeiro digito
	
	int div1 = soma1 / 11;
	int mod1 = soma1 % 11;
	int pmrDigito;
	
	
	if (mod1 < 2)
		pmrDigito = 0;
	else 
		pmrDigito = 11 - mod1;
	
	// segundo digito 
	int soma2 = 0;
	
	for (int i = 0, j = 11; i <= 9; i++, j--){
		soma2 += inputCPF[i] * j;
	}
	
	int div2 = soma2 / 11;
	int mod2 = soma2 % 11;
	int sgdDigito;
	
	if (mod2 < 2)
		sgdDigito = 0;
	else 
		sgdDigito = 11 - mod2;
 
	// validação 
	
	if (pmrDigito == dgt1 && sgdDigito == dgt2)
		cout << "valido";
	else
		cout << "invalido";
		
	return 0;
}

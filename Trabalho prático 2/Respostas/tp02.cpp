#include <iostream>
#include <string.h>
using namespace std;
int main () {
	
	char inputCPF[50];
	cin >> inputCPF;
	
	// validacao	
	int length = strlen(inputCPF);
	
	if (length != 11){
		cout << "CPF invalido" << '\a';
		return 0;
	}
	
	// converter 
	for (int i = 0; i <= length; i ++)
		inputCPF[i] -= 48;

	//  realizar soma
	int soma1 = 0;

	for (int i = 0, j = 10; i < 9 ; i++, j--)	
		soma1 += inputCPF[i] * j;
	
	// achar o primeiro digito
	
	int div1 = soma1 / 11;
	int mod1 = soma1 % 11;
	int verificador1;
	
	if (div1 < 2)
		verificador1 = 0;
	else 
		verificador1 = 11 - mod1;
	
	// achar o segundo digito
	int soma2 = 0;
	
	for (int i = 0, j = 11; i < 10 ; i++, j--)
		soma2 += inputCPF[i] * j;
	
	int div2 = soma2 / 11;
	int mod2 = soma2 % 11;
	int verificador2;
	
	if (div2 < 2)
		verificador2 = 0;
	else 
		verificador2 = 11 - mod2;
	
	// validacao final
	
	bool valido = (verificador1 == inputCPF[9] && verificador2 == inputCPF[10]);
	
	if (valido)
		cout << "CPF valido";
	else
		cout << "CPF invalido" << '\a';
	
	
	return 0;
}
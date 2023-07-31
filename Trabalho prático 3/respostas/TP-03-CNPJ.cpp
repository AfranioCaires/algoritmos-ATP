#include <iostream>
#include <string.h>
using namespace std;
int main () {
 
	char inputCNPJ[100];
	char numerosCNPJ[100];
 
	cout << "Digite um CNPJ: ";
	cin >> inputCNPJ;
	 
 	// remover os caracteres

	int index = 0;
	
	for (int i = 0; i < strlen(inputCNPJ); i++){
 		if (inputCNPJ[i] >= '0' && inputCNPJ[i] <= '9')
 			numerosCNPJ[index++] = inputCNPJ[i] - 48;
	}
	
	numerosCNPJ[index] = '\0';
	
	// multiplicação
	
	int soma1 = 0;
	for (int i = 0, j = 5; j >= 2; j--, i++)
		soma1 += numerosCNPJ[i] * j;
	
	for (int i = 4, j = 9; j >= 2; j--, i++)
		soma1 += numerosCNPJ[i] * j;
	
	// verificador 1
	
	int div1 = soma1 / 11;
	int mod1 = soma1 % 11;
	int verificador1;
	
	if (mod1 < 2)
		verificador1 = 0;
	else 
		verificador1 = 11 - mod1;
	
	// verificador 2
	
	int soma2 = 0;
	for (int i = 0, j = 6; j >= 2; j--, i++)
		soma2 += numerosCNPJ[i] * j;
	
	for (int i = 5, j = 9; j >= 2; j--, i++)
		soma2 += numerosCNPJ[i] * j;
		
	int div2 = soma2 / 11;
	int mod2 = soma2 % 11;
	int verificador2;
	
	if (mod2 < 2)
		verificador2 = 0;
	else 
		verificador2 = 11 - mod2;
	
	// validação final
	
	for (int i = 0; i <= 15; i++){
		cout << pj[i];
}
//	if (verificador1 == numerosCNPJ[12] && verificador2 == numerosCNPJ[13])
//		cout << "CNPJ valido";
//	else
//		cout << "CNPJ invalido";
		
	return 0;
}


#include <iostream>
#include <string.h>
using namespace std;
int main (){
	
	char input[51];
	cout << "Digite uma palavra: ";
	cin >> input;
	
	int totalUpper = 0, totalLower = 0;
	int inputLen = strlen(input);
	 
	for (int i = 0; i < inputLen; i++){
		if (input[i] >= 'A' && input[i] <= 'Z')
			totalUpper++;
			
		else if (input[i] >= 'a' && input[i] <= 'z')
			totalLower++;
	}
	
	bool isUpper = (totalUpper == inputLen);
	bool isLower = (totalLower == inputLen);	
	
	if (isUpper)
		cout << "MAIUSCULO";
		
	else if (isLower)
		cout << "MINUSCULO";
		
	else 
		cout << "Erro";
	
	return 0;
}


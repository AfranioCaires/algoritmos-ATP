#include <iostream>
#include <string.h>
using namespace std;
int main () {
    
    char nome[51], nomeInverso[51];
    
    cout << "Digite una palavra ou frase: ";
    cin.getline(nome, 51);
    
    int i = strlen(nome) -1;
    int j = 0;

    while (i >= 0){
      nomeInverso[j] = nome[i];
      
      i--;
      j++;
    }
    
    nomeInverso[j] = '\0';
    
	if (strcmp(nome, nomeInverso) == 0) 
        cout << "palindromo";
    else 
        cout << "nao e palindromo";
    return 0;
}

#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int totalChar;
    char frase[51];
    cout << "Digite uma frase: ";
    cin.getline(frase, 51);
    totalChar = strlen(frase);
    cout << "Essa frase tem " << totalChar << " caracteres.";
    return 0;
}


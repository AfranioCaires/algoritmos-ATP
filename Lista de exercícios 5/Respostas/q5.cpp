#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char primeiroInput[20], segundoInput[20];
    cout << "digite uma palavra com caracteres minusculos: ";
    cin >> primeiroInput;
    cout << "digite outra: ";
    cin >> segundoInput;
    bool primeiro = (strcmp(primeiroInput, segundoInput) <= 0);
    if (primeiro)
        cout << primeiroInput << " " << segundoInput;
    else
        cout << segundoInput << " " << primeiroInput;
    return 0;
}


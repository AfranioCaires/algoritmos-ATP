#include <iostream>
using namespace std;
int main() {
    char caractere;
    cout << "digite um caractere: ";
    cin >> caractere;
    bool maiusculo = (caractere >= 'A' && caractere <= 'Z');
    if (maiusculo)
        cout << "Caractere maiusculo";
    else
        cout << "nao eh maiusculo";
    return 0;
}


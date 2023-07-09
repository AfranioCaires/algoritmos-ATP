#include <iostream>
using namespace std;
int main() {
    char input;
    cout << "digite um caractere: ";
    cin >> input;
    bool numerico = (input >= '0' && input <= '9');
    bool alfaNumerico = ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z'));
    bool maiusculo = (input >= 'A' && input <= 'Z');
    if (alfaNumerico)
        (maiusculo) ? cout << "ALFABETICO MAIUSCULO" : cout << "ALFABETICO MINUSCULO";
    else if (numerico)
        cout << "NUMERICO";
    else
        cout << "OUTROS CARACTERES";
    return 0;
}


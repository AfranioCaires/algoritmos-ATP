#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float base, expoente, resultado;
    cout << "Digite um numero: ";
    cin >> base;
    cout << "Deseja elevar este numero a qual expoente? ";
    cin >> expoente;
    resultado = pow(base, expoente);
    cout << base << " elevado a " << expoente << " eh " << resultado;
}


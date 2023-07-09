#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float numero, raizQuadrada, raizQuinta, soma;
    cout << "Digite um numero: ";
    cin >> numero;
    raizQuadrada = sqrt(numero);
    raizQuinta = pow(numero, float(1)/5);
    soma = raizQuadrada + raizQuinta;
    cout << "A soma da raiz quadrada e quinta de " << numero << " eh " << soma;
    return 0;
}


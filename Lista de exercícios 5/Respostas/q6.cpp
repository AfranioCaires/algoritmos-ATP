#include <iostream>
using namespace std;
int main() {
    float alfa, beta, teta;
    cout << "digite um angulo de um triangulo: ";
    cin >> alfa;
    cout << "digite outro: ";
    cin >> beta;
    cout << "digite mais um angulo: ";
    cin >> teta;
    bool valido = (alfa + beta + teta == 180);
    bool retangulo = (alfa == 90 || beta == 90 || teta == 90);
    bool agudo = (alfa < 90 && beta < 90 && teta < 90);
    if (valido) {
        if (retangulo)
            cout << "triangulo retangulo";
        else if (agudo)
            cout << "triangulo agudo";
        else
            cout << "triangulo obtuso";
    } else
        cout << "triangulo invalido. A soma dos angulos internos de um triangulo sao 180 graus.";
    return 0;
}


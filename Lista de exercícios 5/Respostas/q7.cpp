#include <iostream>
using namespace std;
int main() {
    float precoFr1, precoFr2;
    int quantidadeFr1, quantidadeFr2;
    cout << "digite o preco do primeiro pacote de fraldas: ";
    cin >> precoFr1;
    cout << "digite a quantidade de fraldas que contem no primeiro pacote: ";
    cin >> quantidadeFr1;
    cout << "digite o preco do segundo pacote de fraldas: ";
    cin >> precoFr2;
    cout << "digite a quantidade de fraldas que contem no segundo pacote: ";
    cin >> quantidadeFr2;
    bool comparativoFr1 = (precoFr1 / quantidadeFr1 < precoFr2 / quantidadeFr2);
    if (comparativoFr1)
        cout << "o primeiro pacote e mais viavel.";
    else
        cout << "o segundo pacote e mais viavel";
    return 0;
}


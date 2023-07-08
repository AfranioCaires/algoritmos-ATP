#include <iostream>
using namespace std;
int main() {
    float velocidade, distancia, tempo;

    velocidade = 80;

    cout << "informe a distancia (km): ";
    cin >> distancia;

    tempo = (distancia / velocidade) * 60;

    cout << "O tempo estimado e de: " << tempo << " minutos";
    return 0;
}


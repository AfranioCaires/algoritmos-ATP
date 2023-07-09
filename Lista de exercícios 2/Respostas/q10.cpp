#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float eixoXA, eixoYA, eixoXB, eixoYB, distanciaAB;
    cout << "digite o valor do eixo x do ponto A:";
    cin >> eixoXA;
    cout << "digite o valor do eixo y do ponto A:";
    cin >> eixoYA;
    cout << "digite o valor do eixo x do ponto B:";
    cin >> eixoXB;
    cout << "digite o valor do eixo y do ponto B:";
    cin >> eixoYB;
    distanciaAB = sqrt(pow((eixoXB - eixoXA), 2) + pow((eixoYB - eixoYA), 2));
    cout << "A distancia entre os dois pontos eh " << distanciaAB;
    return 0;
}


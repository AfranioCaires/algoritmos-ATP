#include <iostream>
using namespace std;
int main() {
    int inputSegundos, restoSegundos, horas, minutos, segundos;
    cout << "Informe o total de segundos: ";
    cin >> inputSegundos;
    horas = inputSegundos/(60*60);
    restoSegundos = inputSegundos % (60*60);
    minutos = restoSegundos / 60;
    segundos = restoSegundos % 60;
    cout << horas << "h " << minutos << " min " << segundos << "s";
    return 0;
}


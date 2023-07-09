#include <iostream>
using namespace std;
int main() {
    int horas, minutos, segundos, total;
    cout << "informe as horas: ";
    cin >> horas;
    cout << "informe os minutos: ";
    cin >> minutos;
    cout << "informe os segundos: ";
    cin >> segundos;
    total = (horas * 3600) + (minutos * 60) + segundos;
    cout << horas << "h " << minutos << " min e " << segundos << "s em segundos eh " << total;
    return 0;
}


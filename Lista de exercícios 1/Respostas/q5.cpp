#include <iostream>
using namespace std;
int main() {
    float raio, diametro, area, perimetro;
    float pi = 3.14159;
    cout << "Digite o diametro da circuferencia (cm): ";
    cin >> diametro;

    raio = diametro / 2;
    area = pi * raio * raio;
    perimetro = 2 * pi * raio;

    cout << "A area e: " << area << " cm." << endl;
    cout << "O perimetro e: " << perimetro << " cm.";

    return 0;
}


#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int varUm, varDois;
    cout << "digite um numero: ";
    cin >> varUm;
    cout << "digite outro numero: ";
    cin >> varDois;
    varUm *= varDois;
    cout << "digite mais um numero: ";
    cin >> varDois;
    varUm *= varDois;
    cout << "digite outro numero: ";
    cin >> varDois;
    varUm *= varDois;
    cout << "digite outro numero: ";
    cin >> varDois;
    varUm *= varDois;
    cout << "O produtos desses numeros eh: " << varUm;
    return 0;
}


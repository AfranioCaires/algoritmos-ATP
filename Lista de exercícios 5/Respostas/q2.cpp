#include <iostream>
using namespace std;
int main() {
    int nota;
    cout << "digite a sua nota: ";
    cin >> nota;
    bool invalido = (nota < 0 || nota > 100);
    bool apto = (nota >= 60 && nota <= 100);
    if (invalido)
        cout << "valor invalido";
    else
        (apto) ? cout << "APROVADO!" : cout << "EM CONSTRUCAO";
    return 0;
}


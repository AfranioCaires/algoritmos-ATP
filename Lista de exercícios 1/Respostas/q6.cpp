#include <iostream>
using namespace std;
int main() {
    int anoNasc, anoAtual, idade;
    cout << "Informe o seu ano de nascimento: ";
    cin >> anoNasc;

    anoAtual = 2023;
    idade = anoAtual - anoNasc;

    cout << "Sua idade e, aproximadamente, " << idade << " anos.";
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    float preco_maco, ano;
    int anos_fumante;

    cout << "Digite o preco de uma caixa de cigarros: ";
    cin >> preco_maco;

    cout << "Digite a quantidade de anos que Pedro e fumante: ";
    cin >> anos_fumante;

    ano = 1.5 * 365;

    float total_gasto = ano * preco_maco * anos_fumante;

    cout << "Total gasto com cigarros: R$" << total_gasto << endl;

    return 0;
}


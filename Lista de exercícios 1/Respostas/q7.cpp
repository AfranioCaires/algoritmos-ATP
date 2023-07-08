#include <iostream>
using namespace std;
int main() {
    float pizzaG, pizzaM, pizzaP, refri2L, refriLata, total, pagamento, troco;
    int qtdPizzaG, qtdPizzaM, qtdPizzaP, qtdRefri2L, qtdRefriLata;

    pizzaG = 30;
    pizzaM = 23;
    pizzaP = 18;
    refri2L = 6.50;
    refriLata = 3.50;

    cout << "Digite a quantidade de pizzas grandes que foram consumidas: ";
    cin >> qtdPizzaG;

    cout << "Digite a quantidade de pizzas medias que foram consumidas: ";
    cin >> qtdPizzaM;

    cout << "Digite a quantidade de pizzas pequenas que foram consumidas: ";
    cin >> qtdPizzaP;

    cout << "Digite a quantidade de refrigerantes 2L que foram consumidas: ";
    cin >> qtdRefri2L;

    cout << "Digite a quantidade de refrigerantes em latinha que foram consumidos: ";
    cin >> qtdRefriLata;

    total = (qtdPizzaG * pizzaG) + (qtdPizzaM * pizzaM) + (qtdPizzaP * pizzaP)
        + (qtdRefri2L * refri2L) + (qtdRefriLata * refriLata);

    cout << "o total a pagar e: " << total << " reais" << endl;

    return 0;
}


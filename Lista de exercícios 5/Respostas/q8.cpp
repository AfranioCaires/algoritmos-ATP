#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char inputPlaca[21];
    bool antigo, modulo, moto, carro, tamanhoAntigo, tamanhoNovo;
    antigo = modulo = carro = moto = false;
    cout << "Digite uma placa de veiculo\n(Padroes aceitos: AAA-1111, AAA1A11, AAA11A1): ";
    cin >> inputPlaca;
    tamanhoAntigo = (strlen(inputPlaca) == 8);
    tamanhoNovo = (strlen(inputPlaca) == 7);
    modulo = (inputPlaca[0] >= 'A' && inputPlaca[0] <= 'Z' &&
              inputPlaca[1] >= 'A' && inputPlaca[1] <= 'Z' &&
              inputPlaca[2] >= 'A' && inputPlaca[2] <= 'Z');
    antigo = (modulo &&
              inputPlaca[3] == '-' &&
              inputPlaca[4] >= '0' && inputPlaca[4] <= '9' &&
              inputPlaca[5] >= '0' && inputPlaca[5] <= '9' &&
              inputPlaca[6] >= '0' && inputPlaca[6] <= '9' &&
              inputPlaca[7] >= '0' && inputPlaca[7] <= '9');
    carro = (modulo &&
             inputPlaca[3] >= '0' && inputPlaca[3] <= '9' &&
             inputPlaca[4] >= 'A' && inputPlaca[4] <= 'Z' &&
             inputPlaca[5] >= '0' && inputPlaca[5] <= '9' &&
             inputPlaca[6] >= '0' && inputPlaca[6] <= '9');
    moto = (modulo &&
            inputPlaca[3] >= '0' && inputPlaca[3] <= '9' &&
            inputPlaca[4] >= '0' && inputPlaca[4] <= 'Z' &&
            inputPlaca[5] >= 'A' && inputPlaca[5] <= 'Z' &&
            inputPlaca[6] >= '0' && inputPlaca[6] <= '9');
    if (modulo && antigo && tamanhoAntigo)
        cout << "padrao antigo";
    else if (modulo && carro && tamanhoNovo)
        cout << "mercosul padrao carro";
    else if (modulo && moto && tamanhoNovo)
        cout << "mercosul padrao moto";
    else
        cout << "placa invalida";
    return 0;
}


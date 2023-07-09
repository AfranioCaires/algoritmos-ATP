#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char palavra[31];
    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "A primeira letra desta palavra e " << palavra[0];
    return 0;
}


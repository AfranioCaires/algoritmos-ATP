#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char palavra[31];
    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "A ultima letra desta palavra e " << palavra[strlen(palavra) - 1];
    return 0;
}


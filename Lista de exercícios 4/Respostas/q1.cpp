#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char nome[21];
    cout << "Digite seu nome: ";
    cin.getline(nome, 21);
    char boasVindas[31] = "Seja bem vindo, ";
    strcat(boasVindas, nome);
    cout << boasVindas << "!";
    return 0;
}


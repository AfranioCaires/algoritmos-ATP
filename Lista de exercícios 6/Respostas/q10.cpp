#include <iostream>
using namespace std;
int main (){
  
  int input;
  int soma;
  
  cout << "digite numeros ate que o 0 zero seja digitado: ";
  
  while (input != 0){
    cin >> input;
    soma += input;
  }
  
  cout << "a soma dos numeros digitados e: " << soma;
  
  return 0;
}

#include <iostream>
using namespace std;
int main (){
  
  int ano = 1920;
  
  while (ano <= 2020){
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
      cout << "o ano " << ano << " eh bissexto\n";  
    ano++;
  }

  return 0;
}

#include <iostream>
#include <string.h>
using namespace std;
int main (){
  
  char nome[51];
  cout << "digite uma palavra: ";
  
  cin.getline(nome, 51);
  
  int i = strlen(nome) -1;
  
  while ( i >= 0) {
    cout << nome[i];
    i--;
  }
  
  return 0;
}

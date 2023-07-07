#include <iostream>
using namespace std;
int main(){
    
    int i = 0, input, maior = 0;
  int menor = INT_MAX;
  
  cout << "digite 10 numeros: ";
       
    while (i < 10){
       
        cin >> input;
        
        if (input > maior)
          maior = input;
    
        if (input < menor)
        menor = input;
        
        i++;
    }
    
    cout << "maior: " << maior << endl;
    cout << "menor: " << menor;
 return 0;   
}

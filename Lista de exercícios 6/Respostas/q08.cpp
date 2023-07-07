#include <iostream>
using namespace std;
int main(){
    
    int i = 0, input, numero = 0;
    
    while (i < 10){
       
        cin >> input;
        
        if (numero < input)
        numero = input;
        
        i++;
    }
    
    cout << "maior: " << numero;
 return 0;   
}

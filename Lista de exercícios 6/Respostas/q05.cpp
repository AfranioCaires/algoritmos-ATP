#include <iostream>
using namespace std;
int main(){
    
    int i = 0, soma = 0;
    
    while (i <= 20){
        soma += i;
        i+=3;
    }
    
    cout << "soma: " << soma;
 return 0;   
}

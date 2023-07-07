#include <iostream>
using namespace std;
int main(){
    
    int i = 0, soma = 0;
    
    while (i <= 20){
       soma += 3 * i;
       i++;
    }
    
    cout << "soma: " << soma;
 return 0;   
}

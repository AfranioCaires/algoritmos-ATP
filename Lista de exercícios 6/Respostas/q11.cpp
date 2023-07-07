#include <iostream>
using namespace std;
int main(){
    
   float teto = 200;
   float chao = 1;
   float soma = 0;
   
   int i = 1;
   while(i <= 100){
       soma += chao/teto;
       
       chao++;
       teto-= 2;
       
       i++;
   }
   
   cout << soma;
 return 0;   
}

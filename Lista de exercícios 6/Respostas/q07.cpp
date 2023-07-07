#include <iostream>
using namespace std;
int main(){
    
    int i = 0, input;
    float media = 0;
    
    while (i < 10){
       
        cin >> input;
        media += input;
        i++;
    }
    
    media /= i;
    
    cout << "media: " << media;
 return 0;   
}

#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int num = 2;
    
    while (count < 1000) {
        int validador = 0;
    
	    for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                validador++;
            }
        }
        if (validador == 2) {
            cout << num << endl;
            count++;
        }
        num++;
    }    return 0;
}

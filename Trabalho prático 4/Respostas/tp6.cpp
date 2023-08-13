#include <iostream>
using namespace std;

int tomada(int a, int b, int c, int d){
	return (a + b + c + d) - 3;
}

int main () {
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	cout << tomada(a, b, c, d);
	 
	return 0;
}

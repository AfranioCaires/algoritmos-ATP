#include <iostream>

int fatorial(int n) {
	int s = 0, t = 0;
	s = n - 1; 
	
	if (n == 0)
		n = 1;
	
	else {
		while (s > 0){
			t = n * s;
			n = t;
			s = s - 1;
		}
	
	}
	return n;
}

using namespace std;
int main() {
	int n;
	cin >> n;
	
	cout << fatorial(n);
	
	return 0;
}

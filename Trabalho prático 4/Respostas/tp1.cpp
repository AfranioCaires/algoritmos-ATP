#include <iostream>
using namespace std;

char cabe(int N, int A, int L, int P){
	if (A >= N && L >= N && P >= N)
		return 'S';
	else 
		return 'N';
}


int main () {
	int N, A, L, P;
	
	cin >> N;
	cin >> A >> L >> P;
	
	cout << cabe(N, A, L, P);
	
	return 0;
}

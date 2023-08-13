#include <iostream> 
using namespace std;

int obi(int n, int p){
	
	int le[2];
	
	le[2] = 0;
	
	for(int i = 0; i < n; i++){ 
		
		cin >> le[0] >> le[1]; 
		
		if(le[0] + le[1] >= p)
 			le[2]++; 
 	}
	
	return le[2];
}
 
int main(){ 
	
	int n, p; 
	cin >> n >> p;  
	
	cout << obi(n, p);
	return 0; 
}

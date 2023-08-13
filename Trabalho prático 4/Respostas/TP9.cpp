#include <iostream> 
using namespace std; 

bool elevador(int n, int c){
	int s, e, atual = 0, status = 0;
	
	for(int i = 0; i < n; i++){ 
 		cin >> s >> e; 
 		atual += (e - s); 
 
 		if(atual > c)
 			status++;
	}
	
	if (status > 0)
		return true;
	else 
		return false;
}

int main() { 
 	int n, c; 
	cin >> n >> c; 
	 
	if(elevador(n, c))
 		cout << "S"; 
	else
		cout << "N"; 
	
 	return 0; 
}

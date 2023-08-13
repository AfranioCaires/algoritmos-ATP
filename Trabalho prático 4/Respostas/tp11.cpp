#include <iostream> 
using namespace std; 

char triangulo (int t1, int t2, int t3, int t4){
	if (t1 < (t2 + t3) && t2 < (t1 + t3) && t3 < (t1 + t2))
	return 'S'; 
	 
	else if (t1 < (t3 + t4) && t3 < (t1 + t4) && t4 < (t1 +  
t3))
	return 'S'; 
 
	else if (t2 < (t3 + t4) && t3 < (t2 + t4) && t4 < (t2 +  
t3)) 
	return 'S'; 

	else if (t1 < (t2 + t4) && t2 < (t1 + t4) && t4 < (t1 +  
t2))
	return 'S';  
 
	else 
	return 'N'; 
}


int main() {
	
	int t1, t2, t3, t4;
	cin >> t1 >> t2 >> t3 >> t4;
	
	cout << triangulo(t1, t2, t3, t4);

	return 0; 
}

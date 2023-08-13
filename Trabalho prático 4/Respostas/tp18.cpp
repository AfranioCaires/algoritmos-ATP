#include <iostream> 
using namespace std; 

int garcom(int b){	
	int l, c, s = 0;
	 
	for (int i = 0; i < b; i++){ 
		cin >> l; 
		cin >> c;
		
		if (l > c)
			s = s + c; 
}
	return s;
}

int main() { 	
	int b;
	cin >> b; 
	
	cout << garcom(b);
	
	return 0; 
}

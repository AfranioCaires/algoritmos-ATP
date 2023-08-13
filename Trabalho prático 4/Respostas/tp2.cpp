#include <iostream> 
using namespace std; 

int cometa(int ano, int s){
	
	if (ano % 76 == 10){ 
		s = ano + 76; 
		return s; 
	} 
	
	while (ano % 76 < 10 || ano % 76 > 10){ 
		ano++; 
		if (ano % 76 == 10){ 
			return ano; 
		} 
	}
}

int main() {
 
	int ano, s; 
	cin >> ano;
	
	cout << cometa(ano, s);
	 
return 0; 
}	

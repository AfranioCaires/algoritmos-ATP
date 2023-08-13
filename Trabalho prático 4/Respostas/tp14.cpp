#include <iostream>  
using namespace std;

int volume(int v, int t){
	int num;
	
	for(int i = 0; i < t;i++){ 
 		cin >> num; 
 		v += num; 
 		
		if(v > 100) 
 			v = 100;
 		if(v < 0)
 			v = 0; 
 	}
	  
 	return v; 
}

int main() { 
	int v,t,num; 
 	cin >> v >> t; 
 
 	cout << volume(v, t);
 return 0; 
}

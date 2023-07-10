#include <iostream>
using namespace std;
int main () {
	
	int f, ano, mes, dia;
	
	cout << "digite o dia: ";
	cin >> dia;
	
	cout<< "digite o mes: ";
	cin >> mes;
	
	cout << "digite o ano: ";
	cin >> ano;
	
	f = ano + dia + 3 * (mes - 1) - 1;
	
	if (mes < 3)
        ano--;
	
	f -= int(0.4 * mes + 2.3);
	f += int(ano/4) - int((ano/100 + 1)* 0.75);
	f %= 7;
	
	switch(f){
		case 0:
			cout << "dom";
			break;
		case 1: 
			cout << "seg";
			break;
		case 2:
			cout << "ter";
			break;
		case 3:
			cout << "qua";
			break;
		case 4:
			cout << "qui";
			break;
		case 5:
			cout << "sex";
			break;
		case 6:
			cout << "sab";
			break;
		default:
			break;
	}
	
	return 0;
}

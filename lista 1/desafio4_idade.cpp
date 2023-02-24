#include <iostream>

using namespace std;

string idade (int a){
	if (a >= 65) {
		return "idoso";
	}
	else if ( a >= 18){
		return "adulto";
	}
	else {
		return "menor de idade";
	}
}

main(){
	setlocale(LC_ALL, "portuguese");
	int i;
	string n;
	
	cout << " informe seu nome ";
	cin >> n;
	
	cout << " informe a sua idade ";
	cin >> i;
	
	cout << n << " você é " << idade(i) << endl; 
				
}

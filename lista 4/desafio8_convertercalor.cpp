#include<iostream>

using namespace std;

main(){
    setlocale (LC_ALL, "portuguese");
 	string op;
 	float c;
 	
 	cout << " você quer converter para kelvin ou fahrenheit? ";
 	cin >> op;
 	
 	cout << " digite a temperatura ";
 	cin >> c;
 	
 	if (op == "kelvin"){
 		cout << " sua tempertura em kelvin é " << c + 273 << endl;
	 }
	 else {
	 	cout << " sua temperatura em Fahrenheit é " << c / 5 << endl;
	 }
    
}

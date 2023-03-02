#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	float s, sn;
	string n;
	
	cout << " informe seu nome ";
	cin >> n;
	
	cout << " informe seu salário ";
	cin >> s;
	
	if (s > 1500){
		sn = s + s * 0.05;
	}
	else if (s <= 1500){
		sn = s + s * 0.1;
	}
	
	cout << " olá " << n << " seu novo salário é " << sn  << " reais"<< endl;
	cout << " a diferença é " << sn - s << " reais";
	
}

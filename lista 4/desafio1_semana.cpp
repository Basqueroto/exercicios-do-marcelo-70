#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	
	
	do{
		
		cout << " informe um dia da semana 1-7 e 8 para sair ";
		cin >> n;
	
		switch (n){
			
			case 1: cout << " � domingo" << endl;
			break;
			
			case 2: cout << " � segunda" << endl;
			break;
			
			case 3: cout << " � ter�a" << endl;
			break;
			
			case 4: cout << " � quarta" << endl;
			break;
			
			case 5: cout << " � quinta" << endl;
			break;
			
			case 6: cout << " � sexta" << endl;
			break;
			
			case 7: cout << " � s�bado" << endl;
			break;
			
			case 8: cout << " encerrando sistema" << endl;
			break;
			
			default: cout << " digite um n�mero v�lido" << endl;
			break;
		}
	}while (n!= 8);
}

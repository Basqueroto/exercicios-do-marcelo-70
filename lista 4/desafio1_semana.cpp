#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	
	
	do{
		
		cout << " informe um dia da semana 1-7 e 8 para sair ";
		cin >> n;
	
		switch (n){
			
			case 1: cout << " é domingo" << endl;
			break;
			
			case 2: cout << " é segunda" << endl;
			break;
			
			case 3: cout << " é terça" << endl;
			break;
			
			case 4: cout << " é quarta" << endl;
			break;
			
			case 5: cout << " é quinta" << endl;
			break;
			
			case 6: cout << " é sexta" << endl;
			break;
			
			case 7: cout << " é sábado" << endl;
			break;
			
			case 8: cout << " encerrando sistema" << endl;
			break;
			
			default: cout << " digite um número válido" << endl;
			break;
		}
	}while (n!= 8);
}

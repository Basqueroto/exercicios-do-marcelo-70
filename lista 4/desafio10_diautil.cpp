#include<iostream>

using namespace std;

main(){
    setlocale (LC_ALL, "portuguese");
    int n;
    
    do {
    	cout << " digite um dia da semana de 1 a 7 ou 8 para sair ";
    	cin >> n;
    	
    	if (n < 7 && n > 1){
    		cout << " é um dia útil" << endl;
		}
		else if (n == 1 || n == 7){
			cout << " não é um dia útil" << endl;
		}
		else if (n == 8){
			cout << " encerrando sistema" << endl;s
		}
		else {
			cout << " digite um número válido" << endl;
		}
    	
	}while(n != 8);
}

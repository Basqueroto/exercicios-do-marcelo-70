#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int m;
	
	do{
		cout << " informe o n�mero de um m�s ";
		cin >> m;
		
		switch (m){
			case 1: cout << " � janeiro" << endl;
			break;
			
			case 2: cout << " � fevereiro" << endl;
			break;
			
			case 3: cout << " � mar�o" << endl;
			break;
			
			case 4: cout << " � abril" << endl;
			break;
			
			case 5: cout << " � maio" << endl;
			break;
			
			case 6: cout << " � junho" << endl;
			break;
			
			case 7: cout << " � julho" << endl;
			break;
			
			case 8: cout << " � agosto" << endl;
			break;
			
			case 9: cout << " � setembro" << endl;
			break;
			
			case 10: cout << " � outubro" << endl;
			break;
			
			case 11: cout << " � novembro" << endl;
			break;
			
			case 12: cout << " � dezembro" << endl;
			break;
			
			case 13: cout << " encerrando programa" << endl;
			break;
			
			default: cout << " op��o inv�lida" << endl;
			break;
		}
	}while(m != 13);
}

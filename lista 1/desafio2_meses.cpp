#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int m;
	
	do{
		cout << " informe o número de um mês ";
		cin >> m;
		
		switch (m){
			case 1: cout << " é janeiro" << endl;
			break;
			
			case 2: cout << " é fevereiro" << endl;
			break;
			
			case 3: cout << " é março" << endl;
			break;
			
			case 4: cout << " é abril" << endl;
			break;
			
			case 5: cout << " é maio" << endl;
			break;
			
			case 6: cout << " é junho" << endl;
			break;
			
			case 7: cout << " é julho" << endl;
			break;
			
			case 8: cout << " é agosto" << endl;
			break;
			
			case 9: cout << " é setembro" << endl;
			break;
			
			case 10: cout << " é outubro" << endl;
			break;
			
			case 11: cout << " é novembro" << endl;
			break;
			
			case 12: cout << " é dezembro" << endl;
			break;
			
			case 13: cout << " encerrando programa" << endl;
			break;
			
			default: cout << " opção inválida" << endl;
			break;
		}
	}while(m != 13);
}

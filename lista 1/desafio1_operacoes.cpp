#include<iostream>

using namespace std;

float soma(float a, float b){
	return a + b;
}

float subtracao(float a, float b){
	return a - b;
}

float divisao(float a, float b){
	return a / b;
}

float multiplicacao(float a, float b){
	return a * b;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	int op;
	do{
		cout << " escolha 2 números " << endl;
		cin >> num1;
		cin >> num2;
		
		cout << " selecione uma opção " << endl;
		cout << " 1 - soma" << endl;
		cout << " 2 - subtração" << endl;
		cout << " 3 - multiplicação" << endl;
		cout << " 4 - divisão" << endl;
		cout << " 5 - sair" << endl;
		cin >> op; 
		switch (op){
			case 1: cout << " faremos a soma " << soma(num1, num2) << endl;
			break;
			
			case 2: cout << " faremos a subtração " << subtracao(num1, num2) << endl;
			break;
			
			case 3: cout << " faremos a multiplicação " << multiplicacao(num1, num2) << endl;
			break;
			
			case 4: cout << " faremos a divião " << divisao(num1, num2) << endl;
			break;
			
			case 5: cout << " encerrando programa" << endl;
			break;
			
			default: cout << " selecione uma opção válida" << endl << endl;
			break; 
		}

	}while(op != 5);
}


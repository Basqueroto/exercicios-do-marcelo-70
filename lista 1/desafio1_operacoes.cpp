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
		cout << " escolha 2 n�meros " << endl;
		cin >> num1;
		cin >> num2;
		
		cout << " selecione uma op��o " << endl;
		cout << " 1 - soma" << endl;
		cout << " 2 - subtra��o" << endl;
		cout << " 3 - multiplica��o" << endl;
		cout << " 4 - divis�o" << endl;
		cout << " 5 - sair" << endl;
		cin >> op; 
		switch (op){
			case 1: cout << " faremos a soma " << soma(num1, num2) << endl;
			break;
			
			case 2: cout << " faremos a subtra��o " << subtracao(num1, num2) << endl;
			break;
			
			case 3: cout << " faremos a multiplica��o " << multiplicacao(num1, num2) << endl;
			break;
			
			case 4: cout << " faremos a divi�o " << divisao(num1, num2) << endl;
			break;
			
			case 5: cout << " encerrando programa" << endl;
			break;
			
			default: cout << " selecione uma op��o v�lida" << endl << endl;
			break; 
		}

	}while(op != 5);
}


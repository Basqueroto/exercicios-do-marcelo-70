#include <iostream>
#include <cmath>

using namespace std;

bool armstrong (int a){
	int soma = 0, contaDigitos = 0, b, c;
	b = a;
	c = a;
	do
    {
        contaDigitos = contaDigitos + 1;
        a = a / 10;
    }
    while (a != 0);
    
    do{
    	soma = soma + pow(b % 10, contaDigitos);
		b = b / 10; 
    	
	}while(b != 0);
	
	if (soma == c) {
		return true;
	}
	else {
		return false;
	}
}

main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	
	cout << " digite um n�mero ";
	cin >> n;
	
	if (armstrong (n) == true){
		cout << " o n�mero " << n << " � um n�mero de armstrong" << endl;
	}
	else {
		 cout << " o n�mero " << n << " n�o � um n�mero de armstrong" << endl;
	}
	
	
}

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
	
	cout << " digite um número ";
	cin >> n;
	
	if (armstrong (n) == true){
		cout << " o número " << n << " é um número de armstrong" << endl;
	}
	else {
		 cout << " o número " << n << " não é um número de armstrong" << endl;
	}
	
	
}

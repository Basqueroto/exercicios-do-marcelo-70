#include <iostream>

using namespace std;

bool contdigit(int a){
	
    int contaDigitos = 0;
    do
    {
        contaDigitos = contaDigitos + 1;
        a = a / 10;
    }
    while (a != 0);
    
    if (contaDigitos == 3){
    	return true;
	}
	else {
		return false;
	}
    
}

int somaNum (int a){
	int y = 0;
	do{
		y = y + a % 10;
		a = a / 10;
	}while(a != 0);
	return y;
}

main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	do{
		cout << " digite um n?mero de 3 d?gitos ";
		cin >> n;
		
		if(contdigit(n) == false){
			cout << " informe um n?mero v?lido" << endl << endl;
		}
			
    } while(contdigit(n) == false);
    
    cout << " a soma dos digitos do n?mero ?: " << somaNum (n);
	
}

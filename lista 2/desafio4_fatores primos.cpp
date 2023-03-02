#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int num, div, cont = 0, n;
	
	cout << " digite um número ";
	cin >> num;
	
	int fatores[num];
	
	n = num;
	
	do{
		for (int i = 2; i <= n; i++){
			if (num % i == 0){
				div = i;
				fatores [cont] = i;
				cont++;
				break;
			}	
		}
		num = num / div; 
		
	}while(num > 1);
	
	for (int i = 0; i <= cont; i++){
		if (fatores[i] == 0 || fatores[i] > n ){
			break;
		}
		cout << " fator " << fatores[i] << endl;
	}
		
}

#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n, div;
 	
 	cout << "digite um n�mero: ";
 	cin >> n;
 	for (int i = 1; i <= n; i++){
 		
 		for(int aux=1 ; aux <= i ; aux++){
 			if(i % aux == 0){
            div++;
        	}
		}
		if (div == 2){
	 	cout << i << " � primo" << endl;
	 	}
	 	div = 0;
	}
}

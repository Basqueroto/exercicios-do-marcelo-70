#include<iostream>

using namespace std;

main(){
    setlocale (LC_ALL, "portuguese");
    int n;
    
    do{
    	cout << " digite um n�mero" << endl;
    	cin >> n;
    	
    	if (n < 1 || n > 10) {
    		cout << " digite um n�mero entre 1 e 10" << endl;
		}
    	
	}while(n < 1 || n > 10);
	
	for (int i = 1; i <= 10; i++){
		cout << n << " X " << i << " = " << n * i << endl;
	}
    
}

#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	int n, t;
	
	cout << " digite um n�mero" << endl;
    cin >> n;
    
    cout << " at� quano deve ser a tabuada" << endl;
    cin >> t;
    	
    	
	
	for (int i = 1; i <= t; i++){
		cout << n << " X " << i << " = " << n * i << endl;
	}
    
	
}

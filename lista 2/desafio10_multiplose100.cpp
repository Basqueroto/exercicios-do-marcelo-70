#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	
	cout << " digite um n�mero ";
	cin >> n;
	
	for (int i = 1; i < 100; i++){
		
		if (n % i == 0 || i % n == 0){
			cout << " o n�mero " << i << " � multiplo de " << n << endl;
		}
	}	
		
}

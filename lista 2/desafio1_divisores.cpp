#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	
	cout << " digite um n�mero ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			cout << " o n�mero " << i << " � um divisor" << endl;
		}
	}	
}

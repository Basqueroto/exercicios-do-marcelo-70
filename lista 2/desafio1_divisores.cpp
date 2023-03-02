#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	
	cout << " digite um número ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			cout << " o número " << i << " é um divisor" << endl;
		}
	}	
}

#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	
	cout << " digite um número ";
	cin >> n;
	
	for (int i = 1; i < 100; i++){
		
		if (n % i == 0 || i % n == 0){
			cout << " o número " << i << " é multiplo de " << n << endl;
		}
	}	
		
}

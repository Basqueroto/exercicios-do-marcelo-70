#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n, num;
	
	cout << " informe um n�mero ";
	cin >> n;
	
	num = n;
	
	cout << " o n�mero em bin�rio � ";
	do {
		cout << n % 2;
		n = n / 2;
	}while(n > 1);
	cout << num % 2;
		
}

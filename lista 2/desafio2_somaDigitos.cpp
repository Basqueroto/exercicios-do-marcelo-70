#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n, nb, s = 0;
	
	cout << " digite um número ";
	cin >> n;
	nb = n;
	
	do {
		s = s + nb % 10;
		nb = nb / 10;
		
	}while(nb != 0);
	
	cout << " a soma dos digitos é " << s << endl;
}

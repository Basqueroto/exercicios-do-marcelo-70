#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n, nb, s = 0;
	
	cout << " digite um n�mero ";
	cin >> n;
	nb = n;
	
	do {
		s = s + nb % 10;
		nb = nb / 10;
		
	}while(nb != 0);
	
	cout << " a soma dos digitos � " << s << endl;
}

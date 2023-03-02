#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n, s;
	
	cout << " informe um número ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		for (int x = 1; x < i; x++){
			if ( i % x == 0){
				s += x;
			}
		}
		if (s == i){
			cout << " número perfeito " << s << endl;
		}
		s = 0;
		
	}

	
}

#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n, s;
	
	cout << " informe um n�mero ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		for (int x = 1; x < i; x++){
			if ( i % x == 0){
				s += x;
			}
		}
		if (s == i){
			cout << " n�mero perfeito " << s << endl;
		}
		s = 0;
		
	}

	
}

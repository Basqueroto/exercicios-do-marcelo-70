#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int num, total = 1, n;
	
	cout << " informe um n�mero ";
	cin >> num;
	n = num;
	for (int i = 0; i <= n; i++){
		if (num <= 1){
			break;
		}
		else {
			total = total * num;
			num--;
		}
	}
	cout << " o fatorial de " << n << " � " << total << endl;
}

#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	int num, p = 1, p2 = 0;
	
	cout << " digite um número ";
	cin >> num;
	
	do{
		cout << p + p2 << endl;
		p = p + p2;
		p2 = p - p2;
	}while(p < num);
}

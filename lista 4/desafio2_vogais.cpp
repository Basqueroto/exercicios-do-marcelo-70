#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	char c;
	
	cout << " digite uma letra ";
	cin >> c;
	
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
		cout << " a letra " << c << " � uma vogal" << endl;
	}	
	else {
		cout << " a letra " << c << " n�o � uma vogal" << endl;
	}
}

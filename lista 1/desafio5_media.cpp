#include <iostream>

using namespace std;

int media (int a, int b, int c){
	return (a + b + c) / 3;
}

main(){
	setlocale(LC_ALL, "portuguese");
	int n1, n2, n3;
	
	cout << "digite suas 3 notas ";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	
	cout << " sua m�dia foi de: " << media(n1, n2, n3) << endl;
	if (media(n1, n2, n3) >= 7){
		cout << " voc� foi aprovado" << endl;
	}
	else if (media(n1, n2, n3) >= 5 ){
		cout << " voc� ficou de recupera��o" << endl;
	}
	else {
		cout << " voc� foi reprovado" << endl;
	}	
}

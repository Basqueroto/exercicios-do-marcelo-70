#include <iostream>

using namespace std;

int death(int ti, int nci){
	int day = 0;
	const int m = 10;
	
	day = nci * m * (ti * 365) / 1440;
	
	return day;
}

main(){
	setlocale(LC_ALL, "portuguese");
	int i, d, h, ci;
	string nome;
	
	cout << " informe seu nome ";
	cin >> nome;
	
	cout << " h� quantos ano voc� fuma " << nome << "? ";
	cin >> i;
	
	cout << " quantos cigarros voc� fuma por dia? ";
	cin >> ci;
	
	if (death (i, ci) > 365){
		cout << " voc� perdeu " << death (i, ci) / 365 << " anos "  << nome << endl;
	}
	else {
		cout << " voc� perdeu " << death (i, ci) << " dias "  << nome << endl;
	}
}

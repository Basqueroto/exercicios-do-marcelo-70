#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
 	int n, div;
 	
 	cout << "digite um número: ";
 	cin >> n;
 	
 	for(int aux=1 ; aux<=n ; aux++){
 		if(n % aux == 0){
            div++;
        }
	 }
	 
	 if (div == 2){
	 	cout << "é primo";
	 }
	 else {
	 	cout << "não é primo";
	 }
}

#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
 	int n, div;
 	
 	cout << "digite um n�mero: ";
 	cin >> n;
 	
 	for(int aux=1 ; aux<=n ; aux++){
 		if(n % aux == 0){
            div++;
        }
	 }
	 
	 if (div == 2){
	 	cout << "� primo";
	 }
	 else {
	 	cout << "n�o � primo";
	 }
}

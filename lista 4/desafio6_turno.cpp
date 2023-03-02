#include<iostream>

using namespace std;

main(){
    setlocale (LC_ALL, "portuguese");
 	
	int n;
     
	do{
		cout << "digite um período de 1 a 3" << endl;
     	cin >> n;

	    switch(n){
	        case 1: cout <<"manhã" << endl;
	        break;
	        
	        case 2: cout <<"tarde" << endl;
	        break;
	        
	        case 3: cout <<"noite" << endl;
	        break;
	        
	        case 4: cout <<"encerrando sistema" << endl;
	        break;
	        
	        default: cout << " digite uma opção válida" << endl;
	        break;
		}
	}while(n != 4);
}   


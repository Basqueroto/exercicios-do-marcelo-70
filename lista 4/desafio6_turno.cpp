#include<iostream>

using namespace std;

main(){
    setlocale (LC_ALL, "portuguese");
 	
	int n;
     
	do{
		cout << "digite um per�odo de 1 a 3" << endl;
     	cin >> n;

	    switch(n){
	        case 1: cout <<"manh�" << endl;
	        break;
	        
	        case 2: cout <<"tarde" << endl;
	        break;
	        
	        case 3: cout <<"noite" << endl;
	        break;
	        
	        case 4: cout <<"encerrando sistema" << endl;
	        break;
	        
	        default: cout << " digite uma op��o v�lida" << endl;
	        break;
		}
	}while(n != 4);
}   


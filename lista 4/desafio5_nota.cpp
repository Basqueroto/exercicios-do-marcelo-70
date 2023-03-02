#include<iostream>

using namespace std;

main(){
    setlocale (LC_ALL, "portuguese");
	int n;
     
	do{
		cout << "digite a sua nota de 1 a 5 ou 6 para sair" << endl;
     	cin >> n;

	    switch(n){
	        case 1: cout <<"nota A" << endl;
	        break;
	        
	        case 2: cout <<"nota B" << endl;
	        break;
	        
	        case 3: cout <<"nota C" << endl;
	        break;
	        
	        case 4: cout <<"nota D" << endl;
	        break;
	        
	        case 5: cout <<"Nota F" << endl;
	        break;
	        
	        case 6: cout << " encerrando o sistema" << endl;
	        break;
	        
	        default: cout << " digite uma opção válida" << endl;
	        break;
		}
	}while(n != 6);
}

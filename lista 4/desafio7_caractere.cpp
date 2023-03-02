#include<iostream>

using namespace std;

main(){
    setlocale (LC_ALL, "portuguese");
    
    char letra;
    cout << " digite um caractere" << endl;
    cin >> letra;
    
    
 	if(letra>='a' && letra<='z'){
        cout << "A letra introduzida é minúscula" << endl;
	}
    else if(letra>='A' && letra<='Z'){
        cout << "A letra introduzida é maiúscula" << endl;
    }
    else{
        cout <<"O caracter introduzido é um número" << endl;  
	}
}

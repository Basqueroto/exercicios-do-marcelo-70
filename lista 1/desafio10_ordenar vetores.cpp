#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int num[3];
	
	cout << " informe um n�mero ";
	cin >> num [0];
	
	cout << " informe um segundo n�mero ";
	cin >> num [1];
	
	cout << " informe um terceiro n�mero ";
	cin >> num [2];
	
	for (int i = 0; i < 3; i++){
		for (int j = i; j < 3; j++)
        {
            if (num[i] > num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
	}
	
	cout << " a ordem dos n�meros � " << num[0] << " " << num[1] << " " << num[2] << endl;
}

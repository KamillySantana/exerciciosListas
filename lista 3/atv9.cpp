#include <iostream>

using namespace std;

main(){
	int x, y;
	
	do {
		cout << "Informe um numero para ser multiplicado de 1 a 10: ";
		cin >> x;
		
		if (x < 1 || x > 10){
        	cout << "Numero invalido." << endl;
    	}
    	
    } while (x < 1 || x > 10);
	
	for (y = 0; y <= 10; y++) {
		cout << x << " x " << y << " = " << x*y << endl;	
	}
}

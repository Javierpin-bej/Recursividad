#include <iostream>
using namespace std;

void abrirmuneca (int numero){
	if (numero == 1) {
		cout << ("Abra la muñeca") << endl;
		abrirmuneca(numero-1);
	}  
	cout << ("Abriendo muñeca ") << numero << endl;
	
}


int main () {
	abrirmuneca(8);
	return 0;
}

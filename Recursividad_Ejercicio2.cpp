#include <iostream>
using namespace std;

int main () {
	int edad;
	string nombre;
	string nombres[3];
	int edades[3];
	cout << ("Ingrese datos") << endl;
	for(int i=0;i<3;i++){
		cout << ("Ingrese el nombre del usuario ") << i+1 << (":");
		cin >> nombre;
		nombres[i] = nombre;
		cout << ("Ingrese la edad del usuario ") << i+1 << (":");
		cin >> edad;
		edades[i] = edad;
	}
	cout << ("\nDatos de usuarios") << endl;
	for(int i=0;i<3;i++){
		cout << ("Usuario ") << i+1 << (":") << nombres[i] << endl << ("Edad: ") << edades[i] << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

void ingresardatos(string nombre, int edad, string nombres[], int edades[]){
	for(int i=0;i<3;i++){
			cout << ("Ingrese el nombre del usuario ") << i+1 << (":");
			cin >> nombre;
			nombres[i] = nombre;
			cout << ("Ingrese la edad del usuario ") << i+1 << (":");
			cin >> edad;
			edades[i] = edad;
		}
}

void mostrar(int edades[], string nombres[]){
	for(int i=0;i<3;i++){
		cout << ("Usuario ") << i+1 << (":") << nombres[i] << endl << ("Edad: ") << edades[i] << endl;
	}
}

int main () {
	int edad;
	string nombre;
	string nombres[3];
	int edades[3];
	cout << ("Ingrese datos") << endl;
	ingresardatos(nombre,edad,nombres,edades);
	cout << ("\nDatos de usuarios") << endl;
	mostrar(edades,nombres);
	
	return 0;
}

#include <iostream>
using namespace std;

int main () {
	int cantidad,num,indice;
	int numeros[cantidad];
	cout << ("Ingrese el tamaño del arreglo: ");
	cin >> cantidad;
	cout << ("Llenar arreglo con ") << cantidad << (" numeros enteros") << endl;
	for(int i=0;i<cantidad;i++){
		cout << ("Numero ") << i+1 << (":");
		cin >> num;
		numeros[i] = num;
	}
	cout << ("\nArreglo lleando con:");
	for(int i=0;i<cantidad;i++){
		cout << numeros[i] << (" ");
	}
	cout << ("\nBuscar por indice") << ("\nIngrese un indice: ");
	cin >> indice;
	for(int i=0;i<cantidad;i++){
		if (indice-1 == i) {
			cout << ("Numero buscado es: ") << numeros[i];
		}
	}
	return 0;
}

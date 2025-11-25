#include <iostream>
using namespace std;

void ingresarnuemros(int& cantidad, int numeros[]) {
	int num;
	cout << ("Llenar arreglo con ") << cantidad << (" numeros enteros") << endl;
	for(int i=0;i<cantidad;i++){
		cout << ("Numero ") << i+1 << (":");
		cin >> num;
		numeros[i] = num;
	}
}

void mostrar(int cantidad,int numeros[]) {
	cout << ("\nArreglo lleando con:");
		for(int i=0;i<cantidad;i++){
			cout << numeros[i] << (" ");
		}
}

void buscar(int indice, int cantidad, int numeros[]) {
		for(int i=0;i<cantidad;i++){
			if (indice-1 == i) {
				cout << ("Numero buscado es: ") << numeros[i];
			}
		}
}

int main (){
	int cantidad, indice;
	int numeros[cantidad];
	cout << ("Ingrese el tamaño del arreglo: ");
	cin >> cantidad;
	ingresarnuemros(cantidad, numeros);
	mostrar(cantidad, numeros);
	cout << ("\nBuscar por indice") << ("\nIngrese un indice: ");
	cin >> indice;
	buscar(indice,cantidad,numeros);
	return 0;
}

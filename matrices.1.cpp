#include <iostream>
using namespace std;

int main () {
	int fila,columna;
	string matriz[fila][columna];
	
	cout << ("Llene la matriz con nombres\n");
	cout << "fila:";
	cin >> fila;
	cout << "columna:";
	cin >> columna;
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout << ("Ingrese matriz[") << i << ("][") << j << ("]: ");
			cin >> matriz[i][j];
		}
	}
	
	cout << ("\nLa matriz es:\n");
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout << matriz[i][j] << (" ");
		}
		cout << "\n";
	}
	
	cout << ("\nMostrar posicion [2][2]\n");
	cout << matriz[1][1];
	
	return 0;
}

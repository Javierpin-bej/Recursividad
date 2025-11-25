#include <iostream>
#include <algorithm>
#include <functional> // Para greater

using namespace std; // Esto permite usar cout, cin, sort, etc. directamente

int main() {
    const int TAMANO = 5;
    int arreglo[TAMANO];

    // 1. Ingresar los 5 datos desde el teclado
    cout << "Por favor, ingresa 5 numeros enteros:" << endl;
    for (int i = 0; i < TAMANO; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arreglo[i]; // Leer el dato del teclado
    }

    // 2. Ordenar e imprimir en orden ascendente
    sort(arreglo, arreglo + TAMANO); // Ordena de forma ascendente por defecto
    cout << "\nArreglo en orden ascendente: ";
    for (int i = 0; i < TAMANO; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // 3. Ordenar e imprimir en orden descendente
    // Se usa greater<int>() como comparador para ordenar de mayor a menor
    sort(arreglo, arreglo + TAMANO, greater<int>()); 
    cout << "Arreglo en orden descendente: ";
    for (int i = 0; i < TAMANO; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

/*
int main () {
	int num;
	for(int i=0;i<=4;i++){
		cout << i << endl;
		cout << i + (i+1) << endl;
	}
}
*/

long fibonacci(long num) {
	if (num == 0) return 0;
	if (num == 1) return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}

int main () {
	int n;
	cout << ("Ingrese cuantos valores quiere mostrar: ");
	cin >> n;
	cout << ("Serie Fibonacci");
	for(int i=0;i<=n;i++){
		cout << fibonacci(i) << " ";
	}
	return 0;
}

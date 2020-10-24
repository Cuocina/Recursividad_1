#include <iostream>
using namespace std;

int ObtenerSumatoriaHastaCien(int comienzo);
int ObtenerFactorial(int n);
int ObtenerFibonacci(int n);
void MostrarReversa(char cadenaCaracteres[]);
void ObtenerMaximo(int vector[], int indiceComienzo, int indiceFin);// Divide & Conquer



// 0 1 1 2 3 5

//Fibonacci de n
//{
 // n ==0 , 0
// n == 1, 1
// n > 1, Fibonacci(n-2) + Fibonacci(n-1)
//}


int main() {
	int resultado = ObtenerSumatoriaHastaCien(1);
	cout << resultado << endl;
	resultado = ObtenerFactorial(10);
	cout << resultado << endl;
	resultado = ObtenerFibonacci(8);
	cout << resultado << endl;

	return 0;
}

// O(N)
int ObtenerSumatoriaHastaCien(int comienzo) {
	int sumatoria = 0;
	if (comienzo <= 100) {
		sumatoria = comienzo + ObtenerSumatoriaHastaCien(comienzo + 1);
	}

	return sumatoria;
}

int ObtenerFactorial(int n) {
	int factorial = 1;
	if (n > 0) {
		factorial = n * ObtenerFactorial(n - 1);
	}
	return factorial;
}

int ObtenerFibonacci(int n) {
	int Fibonacci = 0;
	switch(n) {
		case 0:
			Fibonacci = 0;
			break;
		case 1:
			Fibonacci = 1;
			break;
		default:
			Fibonacci = ObtenerFibonacci(n - 2) + ObtenerFibonacci(n - 1);
			break;
	}
	return Fibonacci;
}
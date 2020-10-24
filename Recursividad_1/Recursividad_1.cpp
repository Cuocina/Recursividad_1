#include <iostream>
using namespace std;

// Interfaces:

int ObtenerSumatoriaHastaCien(int comienzo);
int ObtenerFactorial(int n);

//Precondicion: @n>0
//Postcondicion: Devuelve el numero fibonacci equivalente.
int ObtenerFibonacci(int n);
void MostrarReversa(char cadenaCaracteres[]);
void ObtenerMaximo(int vector[], int indiceComienzo, int indiceFin);// Divide & Conquer



// Código Cliente:

int main() {
	int resultado = ObtenerSumatoriaHastaCien(1);
	int vector[] = { 1; 7; 21; 35; 35; 21; 7; 1 };
	cout << resultado << endl;
	resultado = ObtenerFactorial(10);
	cout << resultado << endl;
	resultado = ObtenerFibonacci(8);
	cout << resultado << endl;
	resultado = ObtenerMaxmo(vector, 0, 7);
	cout << resultado << endl;

	return 0;
}

// Imprementaciones:

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

void ObtenerMaximo(int vector[], int indiceComienzo, int indiceFin) {
	maximo = 0;
	while (indiceComienzo < indiceFin) {
		if (ObtenerMaximo(vector, indiceComienzo + 1, indiceFin) > maximo)
			maximo = vector[indiceComienzo + 1];
	}
	
	return maximo;
}
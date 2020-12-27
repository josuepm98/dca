#include <iostream>
#include <vector>
#include <math.h>
#include <ctime>

using namespace std;

const int n = 100000;


int main() {
	vector<int> primos;

	int primo;
	int cont = 0; //contador para avanzar y cambiar la variable primo (para ir cogiendo el 2, el 3.. y así)

	//considero que del 2 hasta n-1 son todos primos en un principio, a partir de este vector vamos borrando numeros que no sean primos
	for (int i = 2; i < n; i++) {
		primos.push_back(i);
	}
	//considero el primer número (el 2) como primo
	primo = primos[cont];

	double ini = clock();
	//mientras que el numero primo al cuadrado sea menor que n, voy a repetir el for del dowhile, que lo que hace es borrar los multiplos del numero primo actual (que irá cambiando)
	// cont++ -> hace que ahora el primo sea el 3, y así sucesivamente
	do {
		for (int i = 0; i < primos.size(); i++) {
			if (primos[i] % primo == 0 && primos[i] != primo) {
				primos.erase(primos.begin() + i);
			}
		}
		cont++;
		primo = primos[cont];
	} while (pow(primo, 2) < n);
	double fin = clock();
	double time = (double(fin - ini) / ((clock_t) 1000));
	
	
	//muestra los numeros primos
	for (int i = 0; i < primos.size(); i++) {
		cout << primos[i] << " ";
	}

	cout << "Tiempo empleado: " << time << endl;

	hola

	return 0;
}
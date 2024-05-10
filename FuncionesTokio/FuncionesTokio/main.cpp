#include <iostream>

using namespace std;

// Variables globales, accesibles desde cualquier función
float currentHealth = 70.f;
float maxHealth = 100.f;
float damage = 10.0f;
float healing = 3.0f;

// Los _argumentos se escriben así para diferenciarlos de las variables
float AddHealth(float _a, float _b) {
	cout << "He cogido un botiquin y ahora tengo: " << _a + _b << " de salud." << endl;
	return 0;
}

int main() {
	// Las variables locales (declaradas dentro de una función) no pueden accederse desde fuera de esa función
	int value = 3;

	cout << "Hola, Mundo!!" << endl;
	AddHealth(currentHealth, healing);

	// Return 0 quiere decir que la función ha terminado y que lo ha hecho correctamente, cualquier otro return indicaría algún error en la ejecución
	return 0;
}

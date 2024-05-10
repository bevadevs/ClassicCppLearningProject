#include <iostream>

using namespace std;

// Variables globales, accesibles desde cualquier funci�n
float currentHealth = 70.f;
float maxHealth = 100.f;
float damage = 10.0f;
float healing = 3.0f;

// Los _argumentos se escriben as� para diferenciarlos de las variables
float AddHealth(float _a, float _b) {
	cout << "He cogido un botiquin y ahora tengo: " << _a + _b << " de salud." << endl;
	return 0;
}

int main() {
	// Las variables locales (declaradas dentro de una funci�n) no pueden accederse desde fuera de esa funci�n
	int value = 3;

	cout << "Hola, Mundo!!" << endl;
	AddHealth(currentHealth, healing);

	// Return 0 quiere decir que la funci�n ha terminado y que lo ha hecho correctamente, cualquier otro return indicar�a alg�n error en la ejecuci�n
	return 0;
}

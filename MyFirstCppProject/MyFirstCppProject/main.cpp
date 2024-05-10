#include <iostream>
// En los include no se pone ;

// Poniendo esto ya no hace falta poner std:: antes de cout
using namespace std;

int main() {
	int num = 1000;
	int value = 500;
	// Declaración de puntero asignando la dirección de memoria de (apuntando a) num
	int* ptr = &num;

	int i = 33;
	int n = 42;
	// Declaración de una referencia de i, un reflejo de esta, la referencia contiene la variable en sí
	int& refI = i;

	// \n y endl son equivalentes, ambos son saltos de línea
	std::cout << num << "\n";
	std::cout << "Hello World!" << std::endl;
	cout << "El valor de num es: " << num << endl;
	cout << "La dirección de num es: " << &num << endl;
	cout << "El valor de ptr es: " << ptr << endl;
	cout << "La direccion de ptr es " << &ptr << endl;
	cout << "El valor que se guarda en la dirección de memoria a la que apunta ptr es: " << *ptr << endl;
	// Si al puntero le cambiamos el valor a posteriori, cambia a lo que apunta
	ptr = &value;
	cout << "El valor de ptr es: " << ptr << endl;
	cout << "La direccion de ptr es " << &ptr << endl;
	cout << "El valor que se guarda en la dirección de memoria a la que apunta ptr es: " << *ptr << endl;


	// Una referencia no tiene su propia dirección de memoria, no ocupa espacio (a diferencia del puntero)
	cout << "El valor de i es: " << i << endl;
	cout << "La dirección de i es: " << &i << endl;
	cout << "El valor de refI es: " << refI << endl;
	cout << "La dirección de refI es: " << &refI << endl;
	// Si a la referencia le cambiamos el valor a posteriori, cambia el valor de la variable a la que referencia
	refI = n;
	cout << "El valor de i es: " << i << endl;
	cout << "La dirección de i es: " << &i << endl;
	cout << "El valor de refI es: " << refI << endl;
	cout << "La dirección de refI es: " << &refI << endl;

	return 0;
}

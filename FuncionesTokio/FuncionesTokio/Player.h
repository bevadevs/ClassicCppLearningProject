#pragma once
class Player
{
	// Aunque parece una función, sin tipo y con el nombre de la propia clase es el CONSTRUCTOR
	Player();
	// Uno es obligatorio, pero se pueden hacer varios constructores, parametrizados o sin parametrizar
	//Player(float _x, float _y, float _z);

	// Este es el DESTRUCTOR de clase
	//~Player();


	// En vdd no es buena práctica inicializar aquí las variables, pero a veces se hace x las prisas
	float x;
	float y;
	float z;
};


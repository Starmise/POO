#include <iostream>
#include "Persona.h"
#include "Rectangle.h"

using namespace std;

/*int  multiplicar(int num1, int num2)
{
	int multi = num1 * num2;
	cout << "El resultado de la multiplicaci�n es: " << multi << endl;
	return multi;
}*/

int main()
{
	
	float num1;
	float num2;

	cout << "Hola, ingresa el valor de la altura: " << endl;
	cin >> num1;
	cout << "Hola, ingresa el valor del ancho: " << endl;
	cin >> num2;

	Rectangulo Figura;
	Figura.setHeight(num1);
	Figura.setWeight(num2);
	Figura.setPerimeter();
	Figura.setAreas();

	cout << "El ancho del rect�ngulo es: " << Figura.getWeight() << endl;
	cout << "La altura del rect�ngulo es: " << Figura.getHeight() << endl;
	cout << "El �rea del rect�ngulo es: " << Figura.getAreas() << endl;
	cout << "El per�metro del rect�ngulo es: " << Figura.getPerimeter() << endl;

	/*Persona Pepe;
	Pepe.setName("Pepe");
	cout << "Nombre: " << Pepe.getName() << endl;*/

	/*string nombre;

	cout << "Cu�l es tu nombre? " << endl;
	cin >> nombre;
	cout << "Mi nombre es: " << nombre << endl;

	for (int i=1; i <= 5; i++)
	{
		cout << "El n�mero es: " << i << endl;
	}

	multiplicar(15, 7);*/

	return 0;
}
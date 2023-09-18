#include <iostream>
#include "Persona.h"
#include "Rectangle.h"
#include "Commons.h"

using namespace std;

/*int  multiplicar(int num1, int num2)
{
	int multi = num1 * num2;
	cout << "El resultado de la multiplicación es: " << multi << endl;
	return multi;
}*/

int main()
{
	/*int opc = 0;
	Vector2 aldeano;

	cout << "Empiezas con 64 esmeraldas " << endl;

	while (opc <= 0)
	{
		cout << "" << endl;
		cout << "El estado actual del aldeano es: " << aldeano.tipo << endl;
		cout << "Ingresa el comando (las opciones son): " << endl;
		cout << "rayo		mordida		  mapa		  libro		  composta" << endl;
		cout << "(Puedes curar a un aldeano zombie con una *manzana* o tener una oferta especial si el aldeano llega al nvl 10 con *max*) " << endl;
		string command;
		cin >> command;
		aldeano.Command(command);

		cout << "Quieres aceptar su oferta? (ingresa *aceptar* o *nel*) " << endl;
		string tradeo;
		cin >> tradeo;
		if (aldeano.emerald < aldeano.oferta) {
		cout << "Uy, qué lastima, pero no tienes suficientes esmeraldas" << endl;
		tradeo = "nel";
		}
		
		aldeano.Trading(tradeo);

		aldeano.Experiencia();

		cout << "¿Deseas continuar? presiona 0, de lo contrario presiona otro número mayor a 0" << endl;
		cin >> opc;
	}*/

	/*Vector2 position;
	position.setVector2(3, 4);
	position.print();
	position.dotProduct(2);
	position.print();
	Vector2 posit2;
	posit2.setVector2(2, 5);
	int result = position.crosssProdcut(posit2);
	cout << "Result = " << result << endl;
	position.print();*/

	/*
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

	cout << "El ancho del rectángulo es: " << Figura.getWeight() << endl;
	cout << "La altura del rectángulo es: " << Figura.getHeight() << endl;
	cout << "El área del rectángulo es: " << Figura.getAreas() << endl;
	cout << "El perímetro del rectángulo es: " << Figura.getPerimeter() << endl;*/

	/*Persona Pepe;
	Pepe.setName("Pepe");
	cout << "Nombre: " << Pepe.getName() << endl;*/

	/*string nombre;

	cout << "Cuál es tu nombre? " << endl;
	cin >> nombre;
	cout << "Mi nombre es: " << nombre << endl;

	for (int i=1; i <= 5; i++)
	{
		cout << "El número es: " << i << endl;
	}

	multiplicar(15, 7);*/

	return 0;
}
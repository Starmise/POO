#pragma once
#include <iostream>
#include <string>
using namespace std;

enum aldeanoTipo {
	Normal = 0,
	Zombie = 1,
	Bruja = 2,
	Cartografo = 3,
	Agricultor = 4,
	Bibliotecario = 5,
	Curado = 6,
	Supremo = 7
};

struct Aldeano {
	//int x;
	//int y;
	int xp = 0;
	int emerald = 64;
	int oferta = 0;

	void Experiencia(string experiencia) {
		cout << "El nivel del aldeano es: " << xp << endl;
	}

	void Command(string command) {
		if (command == "rayo")
		{
			tipo = aldeanoTipo::Bruja;
			cout << "El aldeano ahora es de tipo: bruja " << tipo << endl;
			cout << "La bruja te ofrece: poción, a cambio de 24 esmeraldas " << endl;
			oferta = 24;
			xp++;
		}
		if (command == "mordida")
		{
			tipo = aldeanoTipo::Zombie;
			cout << "El aldeano ahora es de tipo: zombie " << tipo << endl;
			cout << "El zombie te ofrece: palo de madera, a cambio de 32 esmeraldas " << endl;
			oferta = 32;
			xp++;
		}
		if (command == "mapa")
		{
			tipo = aldeanoTipo::Cartografo;
			cout << "El aldeano ahora es de tipo: cartógrafo " << tipo << endl;
			cout << "El aldeano te ofrece: papel, a cambio de 8 esmeraldas " << endl;
			oferta = 8;
			xp++;
		}
		if (command == "composta")
		{
			tipo = aldeanoTipo::Agricultor;
			cout << "El aldeano ahora es de tipo: agricultor " << tipo << endl;
			cout << "El aldeano te ofrece: sandía, a cambio de 10 esmeraldas " << endl;
			oferta = 10;
			xp++;
		}
		if (command == "libro")
		{
			tipo = aldeanoTipo::Bibliotecario;
			cout << "El aldeano ahora es de tipo: bibliotecario" << tipo << endl;
			cout << "El aldeano te ofrece: 4 lapizlazuli, a cambio de 40 esmeraldas " << endl;
			oferta = 40;
			xp++;
		}
		if ((command == "manzana") && (aldeanoTipo::Zombie))
		{
			tipo = aldeanoTipo::Curado;
			cout << "El aldeano ahora es de tipo: aldeano curado " << tipo << endl;
			cout << "El aldeano te ofrece: 32 esmeraldas, a cambio de 16 esmeraldas " << endl;
			oferta = -32;
			xp++;
		}
		if ((command == "max") && (xp >= 10))
		{
			tipo = aldeanoTipo::Supremo;
			cout << "El aldeano ahora es de tipo: aldeano supremo " << tipo << endl;
			cout << "El aldeano te ofrece: armadura de diamante, a cambio de 64 esmeraldas " << endl;
			oferta = 64;
			xp = 1;
			cout << "El aldeano ha vuelto a ser nivel 1 y un aldeano normal" << endl;
			tipo = aldeanoTipo::Normal;
		}
	}

	void Trading(string tradeo) {
		if (tradeo == "aceptar") {
			cout << "Has aceptado la oferta del aldeano tipo: " << tipo << endl;
			emerald = (emerald - oferta);
			cout << "Tu cuenta de esmeraldas ahora es: " << emerald << endl;
		}
		else {
			cout << "Has rechazado la oferta del aldeano, por lo que sigues con la misma cantidad de esmeraldas " << endl;
		}
	}

	aldeanoTipo tipo = aldeanoTipo::Normal;
};

/*void setVector2(int _x, int _y) {
		x = _x;
		y = _y;
	}

	Vector2 getVector2(){
	Vector2 copy;
	copy.x = x;
	copy.y = y;
	return copy;
	}

	Vector2 dotProduct(int _value) {
		Vector2 copy;
		x *= _value;
		y *= _value;
		copy.x = x;
		copy.y = y;
		return copy;
	}

	int crosssProdcut(Vector2 _vec) {
		return((x * _vec.y) - (y * _vec.x));
	}

	void print() {
		cout << "X: " << x << ", Y: " << y << endl;
	}*/
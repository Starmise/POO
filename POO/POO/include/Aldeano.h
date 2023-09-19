#pragma once
#include "Commons.h"

class aldeano
{
public:
	aldeano();
	~aldeano();

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

	aldeanoTipo getType()
	{
		return tipo;
	}

	int getHealth()
	{
		return vida;
	}

	string getName() {
		return nombre;
	}

	void setType(aldeanoTipo type);

	void setHealth(int health);

	void setName(string name);

	aldeanoTipo tipo = aldeanoTipo::Normal;

	int xp = 0;
	int emerald = 64;
	int oferta = 0;
	int vida;

private:
	string nombre;
};
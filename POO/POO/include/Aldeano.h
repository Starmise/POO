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

	void setType(aldeanoTipo type);
	void setHealth(int health);

	aldeanoTipo tipo = aldeanoTipo::Normal;

private:
	int xp = 0;
	int emerald = 64;
	int oferta = 0;
	int vida;
};
#include "Aldeano.h"

aldeano::aldeano()
{
}

aldeano::~aldeano()
{
}

void aldeano::setType(aldeanoTipo type)
{
	tipo = type;
}

void aldeano::setHealth(int health)
{
	vida = health;
	cout << "El aldeano tiene: " << vida << " de vida" << endl;
}

void aldeano::setName(string name)
{
	nombre = name;
}
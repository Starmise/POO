#pragma once
#include "Commons.h"
#include "Aldeano.h"

class Command
{
public:
	Command();
	~Command();

	void Experiencia() {
		cout << "El nivel del aldeano es: " << xp << endl;
	}

	aldeano Villager;

	void comandos(string command) {
		if (command == "rayo")
		{
			Villager.setType(Villager.Bruja);
			cout << "El aldeano ahora es de tipo: bruja " << Villager.tipo << endl;
			cout << "La bruja te ofrece: poción, a cambio de 24 esmeraldas " << endl;
			oferta = 24;
			xp++;
		}
		if (command == "mordida")
		{
			Villager.setType(Villager.Zombie);
			cout << "El aldeano ahora es de tipo: zombie " << Villager.tipo << endl;
			cout << "El zombie te ofrece: palo de madera, a cambio de 32 esmeraldas " << endl;
			oferta = 32;
			xp++;
		}
		if (command == "mapa")
		{
			Villager.setType(Villager.Cartografo);
			cout << "El aldeano ahora es de tipo: cartógrafo " << Villager.tipo << endl;
			cout << "El aldeano te ofrece: papel, a cambio de 8 esmeraldas " << endl;
			oferta = 8;
			xp++;
		}
		if (command == "composta")
		{
			Villager.setType(Villager.Agricultor);
			cout << "El aldeano ahora es de tipo: agricultor " << Villager.tipo << endl;
			cout << "El aldeano te ofrece: sandía, a cambio de 10 esmeraldas " << endl;
			oferta = 10;
			xp++;
		}
		if (command == "libro")
		{
			Villager.setType(Villager.Bibliotecario);
			cout << "El aldeano ahora es de tipo: bibliotecario" << Villager.tipo << endl;
			cout << "El aldeano te ofrece: 4 lapizlazuli, a cambio de 40 esmeraldas " << endl;
			oferta = 40;
			xp++;
		}
		if ((command == "manzana") && (aldeanoTipo::Zombie))
		{
			Villager.setType(Villager.Curado);
			cout << "El aldeano ahora es de tipo: aldeano curado " << Villager.tipo << endl;
			cout << "El aldeano te ofrece: 32 esmeraldas, a cambio de 16 esmeraldas " << endl;
			oferta = -32;
			xp++;
		}
		if ((command == "max") && (xp >= 10))
		{
			Villager.setType(Villager.Supremo);
			cout << "El aldeano ahora es de tipo: aldeano supremo " << Villager.tipo << endl;
			cout << "El aldeano te ofrece: armadura de diamante, a cambio de 64 esmeraldas " << endl;
			oferta = 64;
			xp = 1;
			cout << "El aldeano ha vuelto a ser nivel 1 y un aldeano normal" << endl;
			Villager.setType(Villager.Normal);
		}
	}

	void Trading(string tradeo) {
		if (tradeo == "aceptar") {
			cout << "Has aceptado la oferta del aldeano tipo: " << Villager.tipo << endl;
			emerald = (emerald - oferta);
			cout << "Tu cuenta de esmeraldas ahora es: " << emerald << endl;
		}
		else {
			cout << "Has rechazado la oferta del aldeano, por lo que sigues con la misma cantidad de esmeraldas " << endl;
		}
	}

private:
	int xp = 0;
	int emerald = 64;
	int oferta = 0;
};
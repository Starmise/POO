#pragma once
#include "Commons.h"
#include "Aldeano.h"

class Command
{
public:
	Command();
	~Command();

	void 
		Experiencia() {
		cout << "El nivel del aldeano es: " << m_xp << endl;
	}

	aldeano Villager;

	void 
		comandos(string command) {
		if (command == "rayo")
		{
			Villager.setType(Villager.Bruja);
			cout << "El aldeano ahora es de tipo: bruja " << Villager.tipo << endl;
			cout << "La bruja te ofrece: pocion, a cambio de 24 esmeraldas " << endl;
			m_oferta = 24;
			Villager.vida -= 20;
			m_xp++;
		}
		if (command == "mordida")
		{
			Villager.setType(Villager.Zombie);
			cout << "El aldeano ahora es de tipo: zombie " << Villager.tipo << endl;
			cout << "El zombie te ofrece: palo de madera, a cambio de 32 esmeraldas " << endl;
			Villager.vida -= 40;
			m_oferta = 32;
			m_xp++;
		}
		if (command == "mapa")
		{
			Villager.setType(Villager.Cartografo);
			cout << "El aldeano ahora es de tipo: cartografo " << Villager.tipo << endl;
			cout << "El aldeano te ofrece: papel, a cambio de 8 esmeraldas " << endl;
			m_oferta = 8;
			m_xp++;
		}
		if (command == "composta")
		{
			Villager.setType(Villager.Agricultor);
			cout << "El aldeano ahora es de tipo: agricultor " << Villager.tipo << endl;
			cout << "El aldeano te ofrece: sandia, a cambio de 10 esmeraldas " << endl;
			m_oferta = 10;
			m_xp++;
		}
		if (command == "libro")
		{
			Villager.setType(Villager.Bibliotecario);
			cout << "El aldeano ahora es de tipo: bibliotecario" << Villager.tipo << endl;
			cout << "El aldeano te ofrece: 4 lapizlazuli, a cambio de 40 esmeraldas " << endl;
			m_oferta = 40;
			m_xp++;
		}
		if ((command == "manzana") && (aldeanoTipo::Zombie))
		{
			Villager.setType(Villager.Curado);
			cout << "El aldeano ahora es de tipo: aldeano curado " << Villager.tipo << endl;
			cout << "El aldeano te ofrece: 32 esmeraldas, a cambio de 16 esmeraldas " << endl;
			m_oferta = -32;
			Villager.vida += 10;
			m_xp++;
		}
		if ((command == "max") && (m_xp >= 10))
		{
			Villager.setType(Villager.Supremo);
			cout << "El aldeano ahora es de tipo: aldeano supremo " << Villager.tipo << endl;
			cout << "El aldeano te ofrece: Armadura de diamante, ";
			cout << " a cambio de 64 esmeraldas " << endl;
			m_oferta = 64;
			m_xp = 1;
			cout << "El aldeano ha vuelto a ser nivel 1 y un aldeano normal" << endl;
			Villager.setType(Villager.Normal);
		}
	}

	void 
		Trading(string tradeo) {
		if (tradeo == "aceptar") {
			cout << "Has aceptado la oferta del aldeano tipo: " << Villager.tipo << endl;
			m_emerald = (m_emerald - m_oferta);
			cout << "Tu cuenta de esmeraldas ahora es: " << m_emerald << endl;
		}
		else {
			cout << "Has rechazado la oferta del aldeano, "; 
			cout<<"por lo que sigues con la misma cantidad de esmeraldas " << endl;
		}
	}

private:
	int m_xp = 0;
	int m_emerald = 64;
	int m_oferta = 0;
};
#pragma once
#include "Prerequisites.h"

class Jugador
{
public:
	Jugador() = default;
	Jugador(string _name, int _health);
	~Jugador() = default;

public:
	string m_name;
	int m_health;
	vector<Item> m_inventory;
	point m_playerPros;
};

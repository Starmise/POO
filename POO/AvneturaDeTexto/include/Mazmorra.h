#pragma once
#include "Prerequisites.h"
class Room;
class Jugador;

class 
	Mazmorra {
public:
	Mazmorra();
	~Mazmorra();

	void 
		generateRooms(point _size);

	void
		movement(char _dir);

public:
	vector<vector<Room>> m_rooms;
		Jugador* m_jugador = nullptr;
};
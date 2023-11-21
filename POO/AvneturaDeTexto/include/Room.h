#pragma once
#include "Prerequisites.h"
class Enemy;

class Room
{
public:
	Room() = default;
	Room(string _name, string _desc);
	Room(bool _isWalkable);
	~Room();

	void
		setRoom(string _name, string _desc);

	void
		setLoot(vector<Item> _loot);

	void
		setEnemies(vector<Enemy*> _enemies);

public:
	string m_name;
	string m_description;
	bool m_isWalkable;
	vector<Item> m_loot;
	vector<Enemy*> m_enemies;
	bool m_isPlayerInRoom;
};
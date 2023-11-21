#include "Room.h"

Room::Room(string _name, string _desc)
{
  m_isWalkable = true;
  m_isPlayerInRoom = true;
}

Room::Room(bool _isWalkable)
{
  m_isWalkable = _isWalkable;
  m_isPlayerInRoom = false;
}

Room::~Room()
{
}

void Room::setRoom(string _name, string _desc)
{
  m_name = _name;
  m_description = _desc;
  m_isWalkable = true;
  m_isPlayerInRoom = false;
}

void Room::setLoot(vector<Item> _loot)
{
  m_loot = _loot;
}

void Room::setEnemies(vector<Enemy*> _enemies)
{
  m_enemies = _enemies;
}

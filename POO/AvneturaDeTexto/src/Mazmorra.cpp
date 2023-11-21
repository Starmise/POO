#include "Mazmorra.h"
#include "Room.h"
#include "Jugador.h"

Mazmorra::Mazmorra()
{
}

Mazmorra::~Mazmorra()
{
}

void 
Mazmorra::generateRooms(point _size) {
  m_rooms.resize(_size.x, vector<Room>(_size.y, Room()));
  m_rooms[0][0].setRoom("Sala principal", "Mucho lore");
  vector<Item> LootRoom1;
  LootRoom1.push_back(Item(itemType::Potion));
  LootRoom1.push_back(Item(itemType::Sword));
  m_rooms[0][0].setLoot(LootRoom1);

  m_jugador = new Jugador("Finn", 100);
}

void Mazmorra::movement(char _dir)
{
  //Guardar la posición actual
  point lastPosition = m_jugador->m_playerPros;

  //Actualizar la direcicón según la dirección elegida
  if (_dir == 'w' && m_jugador->m_playerPros.x > 0) {
    //Mover hacia arriba
    --m_jugador->m_playerPros.x;
  }
  else if (_dir == 'a' && m_jugador->m_playerPros.y > 0) {
    //Mover hacia izquierda
    --m_jugador->m_playerPros.y;
  }
  else if (_dir == 's' && m_jugador->m_playerPros.x < m_rooms.size()-1) {
    //Mover hacia abajo
    ++m_jugador->m_playerPros.x;
  }
  else if (_dir == 'd' && m_jugador->m_playerPros.y < m_rooms[0].size() - 1) {
    //Mover hacia derecha
    ++m_jugador->m_playerPros.y;
  }

  //Actualizar la posición del jugador en la mazmorra
  m_rooms[lastPosition.x][lastPosition.y].m_isPlayerInRoom = false;
  m_rooms[m_jugador->m_playerPros.x][m_jugador->m_playerPros.y].m_isPlayerInRoom = true;
}

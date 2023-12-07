#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clase de ejemplo para el pattern de Singleton
class RegistroActividad {
public:
  RegistroActividad() : m_numActs(0) {}

  static 
    RegistroActividad* 
    getInstance() { //Obtiene la instancia del Singleton
    if (m_instance != nullptr) //Mismo proceso que en Singleton.h
    {
      return m_instance;
    }
    else {
      m_instance = new RegistroActividad;
    }
    return m_instance;
  }

  void 
    addActivity(const string actividad) { //Funci�n para agregar una actividad al registro
    if (m_numActs < m_maxActs) { //Verificar que el registro no est� lleno
      //m_acts[m_numActs++] = actividad;
      m_acts.push_back(actividad); //Agrega la actividad al vector m_acts
    }
    else {
      cout << "Registro de actividades est� lleno." << endl;
    }
  }

  void 
    showActivities() { //Funci�n para mostrar todas las actividades registradas
    cout << "Registro de Actividades:" << endl;
    for (const string actividad:m_acts) {
      //for (int i = 0; i < m_numActs; i++)
      //cout << m_acts[i] << endl;
      cout << actividad << endl;
    }
  }

private:
  static RegistroActividad* m_instance;
  static const int m_maxActs = 20;
  //string m_acts[m_maxActs];
  vector<string> m_acts;
  int m_numActs;
};
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class RegistroActividad {
public:
  RegistroActividad() : m_numActs(0) {}

  static 
    RegistroActividad* 
    getInstance() {
    if (m_instance != nullptr)
    {
      return m_instance;
    }
    else {
      m_instance = new RegistroActividad;
    }
    return m_instance;
  }

  void 
    addActivity(const string actividad) {
    if (m_numActs < m_maxActs) {
      m_acts.push_back(actividad);
    }
    else {
      cout << "Registro de actividades está lleno." << endl;
    }
  }

  void 
    showActivities() {
    cout << "Registro de Actividades:" << endl;
    for (const string actividad:m_acts) {
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
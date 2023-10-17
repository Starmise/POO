#include "Estudainte.h"

Estudiante::Estudiante(const string& _nombre, int _edad, float _calif) {
  m_nombre = _nombre;
  m_edad = _edad;
  m_calificacion = _calif;
}

Estudiante::~Estudiante()
{
}

void 
Estudiante::printData() {
  cout << "Nombre: " << m_nombre << endl;
  cout << "Edad: " << m_edad << endl;
  cout << "Calificación: " << m_calificacion << endl;
  cout << "" << endl;
}
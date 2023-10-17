#include "Persona.h"

Persona::Persona()
{
}

Persona::Persona(const char* _nombre) {
	m_nombre2 = new char[strlen(_nombre) + 1];
	strcpy_s(m_nombre2, strlen(_nombre) + 1, _nombre);
	cout << "Nombre: " << m_nombre2 << endl;
}

Persona::~Persona() {
	delete[] m_nombre2;
}


void Persona::setName(string name) {
	m_nombre = name;
}

void Persona::setAge(int age) {
	m_edad = age;
}
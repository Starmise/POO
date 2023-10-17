#pragma once
#include "Commons.h"

class Estudiante
{
public:
	Estudiante() = default;
	Estudiante(const string& _nombre, int _edad, float _calif);
	~Estudiante();

	void
		printData();

private:
	string m_nombre;
	int m_edad;
	float m_calificacion;
};
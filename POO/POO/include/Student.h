#pragma once
#include "Commons.h"

class miEstudiante
{
public:
	miEstudiante();
	~miEstudiante();

	miEstudiante(string _career, string _name, float _prome, int _age, int _iD);

	string carrera;
	string nombre;
	float prom = 0.0f;
	int edad = 0;
	int id = 0;

private:
	
};


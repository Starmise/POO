#include "Student.h"

miEstudiante::miEstudiante()
{
}

miEstudiante::~miEstudiante()
{
}

miEstudiante::miEstudiante(string _career, string _name, float _prome, int _age, int _iD){
	carrera = _career;
	nombre = _name;
	prom = _prome;
	edad = _age;
	id = _iD;

	if (prom < 6) {
		cout << "El alumno está reprobado" << endl;
	}
}
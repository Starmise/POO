#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona
{
public:
	//Constructor por defecto
	Persona();
	//Destructor
	~Persona();

	Persona(const char* m_nombre);

	//This method is in charge of returning a name
	string 
		getName() {
		return m_nombre;
	}

	//This method is in charge of returning an age
	int 
		getAge() {
		return m_edad;
	}

	void 
		setName(string name);

	void 
		setAge(int age);

public:
	char* m_nombre2;

private:
	string m_nombre;
	int m_edad;
};
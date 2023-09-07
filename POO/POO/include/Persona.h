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

	//This method is in charge of returning a name
	string getName() {
		return nombre;
	}

	//This method is in charge of returning an age
	int getAge() {
		return edad;
	}

	void setName(string name);

	void setAge(int age);

private:
	string nombre;
	int edad;
};
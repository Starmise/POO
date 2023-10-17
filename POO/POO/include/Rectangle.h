#pragma once
#include <iostream>
#include <string>
using namespace std;

class Rectangulo
{
public:
	Rectangulo();
	~Rectangulo();

	int 
		getWeight() {
		return m_ancho;
	}

	int 
		getHeight() {
		return m_altura;
	}

	int 
		getAreas() {
		return m_area;
	}

	int 
		getPerimeter() {
		return m_perimetro;
	}

	void 
		setWeight(int weight);

	void 
		setHeight(int height);

	void 
		setAreas();

	void 
		setPerimeter();

private:
	int m_ancho;
	int m_altura;
	float m_area;
	float m_perimetro;
};

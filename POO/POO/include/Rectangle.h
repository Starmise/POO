#pragma once
#include <iostream>
#include <string>
using namespace std;

class Rectangulo
{
public:
	Rectangulo();
	~Rectangulo();

	int getWeight() {
		return ancho;
	}

	int getHeight() {
		return altura;
	}

	int getAreas() {
		return area;
	}

	int getPerimeter() {
		return perimetro;
	}

	void setWeight(int weight);

	void setHeight(int height);

	void setAreas();

	void setPerimeter();

private:
	int ancho;
	int altura;
	float area;
	float perimetro;
};

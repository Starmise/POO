#include "Rectangle.h"

Rectangulo::Rectangulo()
{
}

Rectangulo::~Rectangulo()
{
}

void Rectangulo::setWeight(int weight)
{
	ancho = weight;
}

void Rectangulo::setHeight(int height)
{
	altura = height;
}

void Rectangulo::setAreas()
{
	area = altura * ancho;
}

void Rectangulo::setPerimeter()
{
	perimetro = 2 * (altura + ancho);
}
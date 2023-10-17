#include "Rectangle.h"

Rectangulo::Rectangulo()
{
}

Rectangulo::~Rectangulo()
{
}

void Rectangulo::setWeight(int weight)	{
	m_ancho = weight;
}

void Rectangulo::setHeight(int height)	{
	m_altura = height;
}

void Rectangulo::setAreas()	{
	m_area = m_altura * m_ancho;
}

void Rectangulo::setPerimeter()	{
	m_perimetro = 2 * (m_altura + m_ancho);
}
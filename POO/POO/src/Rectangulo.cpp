#include "Rectangulo.h"

Rectang::Rectang() : ancho(0.0), altura(0.0)
{
}

Rectang::~Rectang()
{
}

void Rectang::setAncho(float _ancho) {
  ancho = _ancho;
}

void Rectang::setAltura(float _altura) {
  altura = _altura;
}

float Rectang::getArea() {
  return ancho * altura;
}
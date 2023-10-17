#pragma once
#include "Commons.h"

class Rectang
{
public:
  Rectang();
  ~Rectang();
  
  void 
    setAncho(float _ancho);

  void 
    setAltura(float _altura);

  float getArea();

private:
  float ancho;
  float altura;
};

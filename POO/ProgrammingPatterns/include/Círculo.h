#pragma once
#include "Prerequisites.h"

class Circulo {
public:
  virtual
    void
    dibujarCirculo() {
    cout << "Se ha dibujado un circulo." << endl;
  }
};

class Cuadrado {
public:
  virtual
    void
    dibujarCuadrado() {
    cout << "Se ha dibujado un cuadrado." << endl;
  }
};

class Dibujable {
public:
  virtual
    void
    dibujar() {
    cout << "Metodo nuevo llamado." << endl;
  }
};

class CirculoAdapter : public Dibujable {
public:
  CirculoAdapter(Circulo* circulo) : m_Circulo(circulo) {}

  void dibujar() override {
    cout << "Adaptador llamado para dibujar un circulo." << endl;
    m_Circulo->dibujarCirculo();
  }

public:
  Circulo* m_Circulo;
};

class CuadradoAdapter : public Dibujable {
public:
  CuadradoAdapter(Cuadrado* cuadrado) : m_cuadrado(cuadrado) {}

  void dibujar() override {
    cout << "Adaptador llamado para dibujar un cuadrado." << endl;
    m_cuadrado->dibujarCuadrado();
  }

public:
  Cuadrado* m_cuadrado;
};
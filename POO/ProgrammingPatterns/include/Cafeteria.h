#pragma once
#include "Prerequisites.h"

class
  Cafeteria {
public:
  void prepararCafe() {
    cout << "Café preparado" << endl;
  }
};

class
  Condimento {
public:
  virtual void decorar() = 0;
};

class
  Leche : public Condimento {
public:
  Leche(Cafeteria* _condimento) :
    m_component(_condimento) { }

  void decorar() override {
    m_component->prepararCafe();
    cout << "Cafe con leche" << endl;
  }

private:
  Cafeteria* m_component;
};

class
  Azucar : public Condimento {
public:
  Azucar(Cafeteria* _condimento) :
    m_component(_condimento) { }

  void decorar() override {
    m_component->prepararCafe();
    cout << "Cafe con azucar" << endl;
  }

private:
  Cafeteria* m_component;
};
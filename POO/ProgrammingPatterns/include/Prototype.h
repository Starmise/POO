#pragma once
#include "Prerequisites.h"

class Prototype
{
public:
  virtual Prototype* clonar() = 0;
  virtual void configurar(string _value ) = 0;
  virtual void print() = 0;
};

//Clase concreta de prototipo
class PrototipocConcreto : public Prototype {
public:
  Prototype* clonar() override {
    PrototipocConcreto* copy = new PrototipocConcreto();
    copy->configurar(m_value);
    return copy;
  }

  void configurar(string _value) override {
    m_value = _value;
  }

  void print() override {
    cout << "Valor: " << m_value << endl;
  }

private:
  string m_value;
};
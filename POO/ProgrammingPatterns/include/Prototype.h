#pragma once
#include "Prerequisites.h"

//Clase con la lógica para prototype
class Prototype
{
public:
  virtual Prototype* clonar() = 0; //Instancia de la clase que se va a clonar
  virtual void configurar(string _value ) = 0; //Función para configurar el prototipo
  virtual void print() = 0; //Función para imprimir los valores de configurar
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
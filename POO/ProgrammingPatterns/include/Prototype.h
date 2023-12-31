#pragma once
#include "Prerequisites.h"

/*El patr�n Prototype se usa para crear nuevos objetos a partir de una clase que
funciona como un prototipo existente. Define un m�todo dentro de dicho prototipo
que sirve para poder clonar este objeto y poder configurarlo cuando se cree uno
nuevo, evitando as� la necesidad de crear subclases para cada tipo de objeto.*/

//Clase con la l�gica para prototype
class Prototype
{
public:
  virtual Prototype* clonar() = 0; //Instancia de la clase que se va a clonar
  virtual void configurar(string _value ) = 0; //Funci�n para configurar el prototipo
  virtual void print() = 0; //Funci�n para imprimir los valores de configurar
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
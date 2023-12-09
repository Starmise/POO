#pragma once
#include "Prerequisites.h"

/*Es como Factory, pero este patr�n permite una mayor abstracci�n debido a que 
define una interfaz para crear familias de objetos relacionados.*/

//Clase base para productos A
class ProductA {
public:
  virtual
    void
    operationA() = 0;
};

//Clase base para productos B
class ProductB {
public:
  virtual
    void
    operationB() = 0;
};

//Clase abstract factory
class AbstractFactory {
  public:
    virtual ProductA* crearProductoA() = 0;
    virtual ProductB* crearProductoB() = 0;
}; 

//Clase concreta para productos A
class productA1 : public ProductA {
public:
  void
    operationA() override {
    cout << "Operaci�n A en ProductoA1" << endl;
  }
};

//Clase concreta para productos B
class productB1 : public ProductB {
public:
  void
    operationB() override {
    cout << "Operaci�n B en ProductoA1" << endl;
  }
};

//Clase concreta para la implementaci�n de abstract factory
class ConcreteAbsFactory : public AbstractFactory {
public:
  ProductA* crearProductoA() override {
    return new productA1();
  }
  ProductB* crearProductoB() override {
    return new productB1();
  }
};
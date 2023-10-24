#pragma once
#include "Prerequisites.h"

/*
  Brief: Esta clase est� encargada de ser el objeto base de los productos que se crear�n
*/
class Product {
public:
  virtual
    void
    operacion() = 0;
};

/*
  Brief: Esta clase es el objeto base que sirve para crear las instancias de 
  cada producto con la funci�n "crearProducto()"
*/
class Factory {
public:
  virtual
  Product* crearProducto() = 0;
};

/*
  Brief: Esta clase se usa para realizar las operaciones tras recibir el producto
*/
class ConcreteProduct : public Product {
public:
  void
    operacion() override {
    cout << "Ac� se realiza una operaci�n" << endl;
  }
};

/*
  Brief: Se usa para crear nuevos productos
*/
class ConcreteFactory : public Factory {
public:
    Product* crearProducto() override {
    return new ConcreteProduct();
  }
};

class Vehiculo {
public:
  virtual 
    void 
    descripcion() {
    cout << "Hola, soy un veh�culo" << endl;
  }
};

class ConcreteCoche : public Vehiculo {
public:
  void
    descripcion() override {
    cout << "Hola, soy un coche" << endl;
  }
};

class ConcreteBicicleta : public Vehiculo {
public:
  void
    descripcion() override {
    cout << "Hola, soy un bicicleta" << endl;
  }
};

class FactoryVehiculos {
public: 
  virtual
    Vehiculo* crearVehiculo() = 0;
};

class ConcreteFactoryCoche : public FactoryVehiculos {
public:
  Vehiculo* crearVehiculo() override {
    return new ConcreteCoche();
  }
};

  class ConcreteFactoryBicicleta : public FactoryVehiculos {
  public:
    Vehiculo* crearVehiculo() override {
      return new ConcreteBicicleta();
    }
};
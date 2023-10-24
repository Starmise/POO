//Programming Patterns
#include "Prerequisites.h"
#include "Singleton.h"
#include "ActivityRegister.h"
#include "Factory.h"
#include "AbstractFactory.h"

//Singleton* Singleton::m_instance = nullptr;
//RegistroActividad* RegistroActividad::m_instance = nullptr;

int main() {
  /*Singleton* SingleMan = Singleton::getInstance();
  SingleMan->setValue(27);

  Singleton* SingleMan2 = Singleton::getInstance();
  std::cout << "Value: " << SingleMan2->getValue() << std::endl;*/

  /*RegistroActividad* Registro = RegistroActividad::getInstance();
  RegistroActividad* Registro2 = RegistroActividad::getInstance();
  Registro->addActivity("Primer actividad");
  Registro->addActivity("Segunda actividad");
  Registro->addActivity("Tercea actividad");
  Registro->addActivity("Cuarta actividad");

  Registro2->showActivities();*/

  /*Factory* factory = new ConcreteFactory();
  Product* product = factory->crearProducto();
  product->operacion();

  delete factory;
  delete product;

  //
  FactoryVehiculos* factoryV = new ConcreteFactoryCoche();
  Vehiculo* vehiculo = factoryV->crearVehiculo();
  vehiculo->descripcion();

  delete factoryV;
  delete vehiculo;
*/

  //ABSTRACT FACTORY
  AbstractFactory* AFactory = new ConcreteAbsFactory();
  ProductA* productA = AFactory->crearProductoA();
  ProductB* productB = AFactory->crearProductoB();
  productA->operationA();
  productB->operationB();

  delete AFactory;
  delete productA;
  delete productB;

  return 0;
}
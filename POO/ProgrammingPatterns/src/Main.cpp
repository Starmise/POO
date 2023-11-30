//Programming Patterns
#include "Prerequisites.h"
#include "Singleton.h"
#include "ActivityRegister.h"
#include "Factory.h"
#include "AbstractFactory.h"
#include "Builder.h"
#include "Pizza.h"
#include "Adapter.h"
#include "C�rculo.h"
#include "Prototype.h"
#include "Decorator.h"
#include "Cafeteria.h"

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

  /*//ABSTRACT FACTORY
  AbstractFactory* AFactory = new ConcreteAbsFactory();
  ProductA* productA = AFactory->crearProductoA();
  ProductB* productB = AFactory->crearProductoB();
  productA->operationA();
  productB->operationB();

  delete AFactory;
  delete productA;
  delete productB;*/

  //Builder
  /*Builder* constructor = new BuilderConcreto();
  Director director(constructor);

  director.build();

  bProduct* producto = constructor->obtenerProducto();
  producto->print();

  delete constructor;
  delete producto;*/
  
  
  //Pizza Builder
  /* 
  Oven* construct = new HawaianPizza();
  Oven* construct1 = new VeggiePizza();
  Chef chef(construct);
  Chef chef(construct1);

  chef.build();

  Pizza* pizza = construct->getProduct();
  pizza->print();

  Pizza* pizza1 = construct1->getProduct();
  pizza1->print();

  delete construct;
  delete pizza; */

  //Adapter
  /*
  InterfazVieja* objViejo = new InterfazVieja();
  InterfazNueva* objNuevo = new Adapter(objViejo);

  objNuevo->newMethod();

  delete objViejo;
  delete objNuevo;

  //Adapter de c�rculo
  Circulo* circle = new Circulo();
  Cuadrado* square = new Cuadrado();
  Dibujable* AdCircle = new CirculoAdapter(circle);
  Dibujable* AdSquare = new CuadradoAdapter(square);

  AdCircle->dibujar();
  AdSquare->dibujar();

  delete circle;
  delete square;
  delete AdCircle;
  delete AdSquare;*/

  //Prototype
  Prototype* prototype = new PrototipocConcreto();
  prototype->configurar("Ejemplo");

  Prototype* copia = prototype->clonar();
  prototype->print();
  copia->print();

  delete prototype;
  delete copia;

  //Decorator
  /*ConcreteComponent* objeto = new ConcreteComponent();
  ConcreteDecoratorA* decoratorA = new ConcreteDecoratorA(objeto);
  ConcreteDecoratorB* decoratorB = new ConcreteDecoratorB(decoratorA);

  objeto->operacion();
  decoratorA->operacion();
  decoratorB->operacion();

  delete objeto;
  delete decoratorA;
  delete decoratorB;*/

  //Cafeteria decorator
  Cafeteria* cafeteria = new Cafeteria();
  Leche* cafeLeche = new Leche(cafeteria);
  Azucar* cafeAzucar = new Azucar(cafeteria);

  cafeteria->prepararCafe();
  cafeLeche->decorar();
  cafeAzucar->decorar();

  delete cafeteria;
  delete cafeAzucar;
  delete cafeLeche;
  return 0;
}
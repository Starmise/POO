//Programming Patterns
#include <iostream>
#include "Singleton.h"
#include "ActivityRegister.h"
using namespace std;

//Singleton* Singleton::m_instance = nullptr;
RegistroActividad* RegistroActividad::m_instance = nullptr;

int main() {
  /*Singleton* SingleMan = Singleton::getInstance();
  SingleMan->setValue(27);

  Singleton* SingleMan2 = Singleton::getInstance();
  std::cout << "Value: " << SingleMan2->getValue() << std::endl;*/

  RegistroActividad* Registro = RegistroActividad::getInstance();
  RegistroActividad* Registro2 = RegistroActividad::getInstance();
  Registro->addActivity("Primer actividad");
  Registro->addActivity("Segunda actividad");
  Registro->addActivity("Tercea actividad");
  Registro->addActivity("Cuarta actividad");

  Registro2->showActivities();

  return 0;
}
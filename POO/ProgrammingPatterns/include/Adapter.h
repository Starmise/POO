#pragma once
#include "Prerequisites.h"

/*El patr�n Adapter permite que dos interfaces diferentes trabajen juntas. Convierte
la interfaz vieja de una clase en otra interfaz nueva.*/

//Depreciada para la interfaz vieja
class InterfazVieja {
public:
  virtual
    void
    OldMethod() {
    cout << "Metodo viejo llamado." << endl;
  }
};

//Objetivo para una nueva interfaz
class InterfazNueva {
public:
  virtual
    void
    newMethod() {
    cout << "Metodo nuevo llamado." << endl;
  }
};

//Implementa la nueva interfaz pero heredando la interfaz vieja para adaptarla
class Adapter : public InterfazNueva {
public:
  Adapter(InterfazVieja* _vieja) : m_interfazVieja(_vieja) {}

  void newMethod() override {
    cout << "Adaptador llamado al metodo nuevo." << endl;
    m_interfazVieja->OldMethod();
  }

public:
  InterfazVieja* m_interfazVieja;
};
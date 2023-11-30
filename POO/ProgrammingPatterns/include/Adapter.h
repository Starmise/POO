#pragma once
#include "Prerequisites.h"

//Depreciada
class InterfazVieja {
public:
  virtual
    void
    OldMethod() {
    cout << "Metodo viejo llamado." << endl;
  }
};

//Objetivo
class InterfazNueva {
public:
  virtual
    void
    newMethod() {
    cout << "Metodo nuevo llamado." << endl;
  }
};

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
#pragma once
#include "Prerequisites.h"

class
  Component2 {
public:
  virtual void operacion() = 0;
};

class
  leaf : public Component2 {
  void operacion() override {
    cout << "Operacion en hoja" << endl;
  }
};

class
  Composite : public Component2 {
public:
  void
    operacion() override {
    cout << "Operacion en composite. Contiene: "
      << m_leafs.size() << " leafs." << endl;

    for (auto hoja : m_leafs) {
      hoja->operacion();
    }
  }

  void
    addLeaf(Component2* _leaf) {
    m_leafs.push_back(_leaf);
  }
public:
  vector<Component2*>m_leafs;
};
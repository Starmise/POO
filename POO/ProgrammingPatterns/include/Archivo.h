#pragma once
#include "Prerequisites.h"

class
  Archivo {
public:
  virtual void mostrarInfo() {
    cout << "Soy un archivo" << endl;
  }
};

class
  Carpeta {
public:
  virtual void mostrarInfo() {
    cout << "Soy una carpeta" << endl;
  }
};

class
  Sistema {
public:
  virtual void mostrarInfo() = 0;
};

class
  SistemaArchivo : public Archivo, public Sistema {
public:
  void
    mostrarInfo() override {
    cout << "Operacion en composite. Contiene: "
      << m_docs.size() << " documentos." << endl;

    for (auto hoja : m_docs) {
      hoja->mostrarInfo();
    }
  }

  void
    agregarSistema(Sistema* _doc) {
    m_docs.push_back(_doc);
  }
public:
  vector<Sistema*>m_docs;
};

class
  SistemaCarpeta : public Carpeta, public Sistema {
public:
  void
    mostrarInfo() override {
    cout << "Operacion en composite. Contiene: "
      << m_carp.size() << " Carpetas." << endl;

    for (auto hoja : m_carp) {
      hoja->mostrarInfo();
    }
  }

  void
    agregarSistema(Sistema* _doc) {
    m_carp.push_back(_doc);
  }
public:
  vector<Sistema*>m_carp;
};
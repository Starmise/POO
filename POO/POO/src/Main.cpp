#include "Commons.h"
#include "Persona.h"
#include "Estudainte.h"

int main()  {

  Persona* persona = new Persona("Luis");

  delete persona;

  const int numEstudiant = 3;
  Estudiante** estudiantes = new Estudiante * [numEstudiant];
  estudiantes[0] = new Estudiante("Luis Angel", 19, 9.6f);
  estudiantes[1] = new Estudiante("Jhon", 18, 5.0f);
  estudiantes[2] = new Estudiante("Arturo", 20, 7.77f);

  for (int i = 0; i < numEstudiant; i++)
  {
    estudiantes[i]->printData();
  }
  for (int i = 0; i < numEstudiant; i++)
  {
    delete estudiantes[i];
  }

  /*Rectang rect1;
  Rectang rect2;

  rect1.setAncho(7.0);
  rect2.setAltura(10.0);

  rect1.setAncho(4.5);
  rect2.setAltura(5.0);

  float area1 = rect1.getArea();
  float area2 = rect2.getArea();

  cout << "Área del rectángulo 1: " << area1 << endl;
  cout << "Área del rectángulo 2: " << area2 << endl;
*/
  return 0;
}
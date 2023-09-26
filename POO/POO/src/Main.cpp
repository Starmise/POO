#include "Commons.h"
#include "Bank.h"

//#include "Student.h"
//#include "Aldeano.h"
//#include "commandh.h"

int main()
{
    CuentaBancaria Cuenta;
    
    Cuenta.menu();


    /*miEstudiante estudiante("videojuegos", "Luis", 9.82, 19, 18300);

    cout << "Ok, el alumo " << estudiante.nombre << ", con un promedio de " << estudiante.prom <<
        " con una edad de " << estudiante.edad << " años, y perteneciente a la carrera" << estudiante.carrera <<
        " ha sido registrado" << endl;*/

    /*cout << "Hola, ingresa el nombre del estudiante: " << endl;
    cin >> estudiante.nombre;
    cout << "Ingresa la carrera del estudiante: " << endl;
    cin >> estudiante.carrera;
    cout << "Ingresa el ID del estudiante: " << endl;
    cin >> estudiante.id;
    cout << "Ingresa el promedio del estudiante: " << endl;
    cin >> estudiante.prom;
    cout << "Ingresa la edad del estudiante: " << endl;
    cin >> estudiante.edad;*/

    /*int opc = 0;
    aldeano villager;
    Command command;

    cout << "Empiezas con 64 esmeraldas " << endl;

    while (opc <= 0)
    {
        cout << "" << endl;
        cout << "El estado actual del aldeano es: " << villager.tipo << endl;
        villager.setHealth(100  );

        villager.setName("Juan");
        cout << "Nombre: " << villager.getName() << endl;

        cout << "Ingresa el comando (las opciones son): " << endl;
        cout << "rayo		mordida		  mapa		  libro		  composta" << endl;
        cout << "(Puedes curar a un aldeano zombie con una *manzana* o tener una oferta especial si el aldeano llega al nvl 10 con *max*) " << endl;
        string usuarioCommand;
        cin >> usuarioCommand;
        command.comandos(usuarioCommand); 

        cout << "Quieres aceptar su oferta? (ingresa *aceptar* o *nel*) " << endl;
        string tradeo;
        cin >> tradeo;
        if (villager.emerald < villager.oferta) {
            cout << "Uy, que lastima, pero no tienes suficientes esmeraldas" << endl;
            tradeo = "nel";                                                                              
        }

        command.Trading(tradeo);

        command.Experiencia(); // Llama a la función de la clase Command

        cout << "Deseas continuar? presiona 0, de lo contrario presiona otro numero mayor a 0" << endl;
        cin >> opc;
    }*/

    return 0;
}
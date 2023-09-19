#include <iostream>
#include "Persona.h"
#include "Rectangle.h"
#include "Commons.h"
#include "Aldeano.h"
#include "commandh.h"

using namespace std;

/*int  multiplicar(int num1, int num2)
{
    int multi = num1 * num2;
    cout << "El resultado de la multiplicaci�n es: " << multi << endl;
    return multi;
}*/

int main()
{
    int opc = 0;
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
    }

    return 0;
}
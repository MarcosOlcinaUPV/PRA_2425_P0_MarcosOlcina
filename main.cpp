#include <iostream>
#include "brazoRobotico.h"

using namespace std;

int main(){
    // Crear un objeto de la clase BrazoRobotico en las coordenadas (0, 0, 0)
    BrazoRobotico brazo(0.0, 0.0, 0.0, false);
    
    // Mostrar coordenadas iniciales
    cout << "Posición inicial: (" << brazo.getx() << ", " << brazo.gety() << ", " << brazo.getz() << ")" << endl;
    
    // Intentar coger un objeto
    brazo.coger();
    cout << "Cogiendo un objeto ... " << endl;

    // Mover el brazo a nuevas coordenadas
    brazo.mover(1.0, 2.0, 3.0);
    cout << "Moviendo a: (" << brazo.getx() << ", " << brazo.gety() << ", " << brazo.getz() << ")" << endl;

    // Soltar el objeto
    brazo.soltar();
    cout << "Dejando un objeto ... " << endl;

    return 0;
}


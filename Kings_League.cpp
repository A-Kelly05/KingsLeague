#include <iostream>
#include "KLconfi.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int eleccion=0, nombre;
    cout<< "1. Equipos" << endl;
    cout << "2. Tabla" << endl;
    cout << "3. MVP" << endl;
    cout << "4. Salir" << endl;
    cin >> eleccion;
    switch (eleccion)
    {
    case 1:
         posicionesKingsleague();
        break;
    case 2:
        equiposKingsLeague(nombre);
        break;

    default:
        break;
    }
    return 0;
}

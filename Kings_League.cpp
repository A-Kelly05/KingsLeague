#include <iostream>
#include "KLconfi.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    
    int eleccion=0, nombre, mvp;
    while (1==1){
    cout << " ----KINGS LEAGUE----" <<endl;
    cout << "1. Tabla de Clasificacion" << endl;
    cout << "2. Equipos" << endl;
    cout << "3. MVP" << endl;
    cout << "4. Salir" << endl;
    cout << "Escoge una de las opciones" << endl;
    cin >> eleccion;
    switch (eleccion)
    {
    case 1:
         posicionesKingsleague();
        break;
    case 2:
        equiposKingsLeague(nombre);
        break;

    case 3:
        kingsMvp(mvp);
        break;

    case 4:
        cout << "Gracias por tu tiempo" << endl;
        return 0;
    default:
    cout << "" << endl;
    
        break;
    }
    }
    return 0;
}

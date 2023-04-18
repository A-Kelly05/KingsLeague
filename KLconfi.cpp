#include <iostream>
using namespace std;

void posicionesKingsleague();
int equiposKingsLeague(int nombre);


void posicionesKingsleague(){
cout << "-------- TABLA DE POSICIONES --------" << endl;
cout << "Pos./ Equipo          /PG/PP/GF/GC/DG "<<endl;
cout << "1.  Ultimate Mostoles /08/03/34/27/07 "<<endl;
cout << "2.  Porcinos FC       /07/04/37/26/11 "<<endl;
cout << "3.  Los Troncos FC    /07/04/40/34/06 "<<endl;
}

int equiposKingsLeague(int nombre){
        
        cout << "Equipos" << endl;
        cout << "1. Porcinos FC" << endl;
        cout << "2. Rayo de Barcelona" << endl;
        cout << "3. Los Troncos FC" << endl;
        cout << "4. KunIsports" << endl;
        cout << "5. JIjantes FC" << endl;
        cout << "6. Pio FC" << endl;
        cout << "7. Saiyans FC" << endl;
        cout << "8. El Barrio" << endl;
        cout << "9. 1K FC" << endl;
        cout << "10. Aniquiladores FC" << endl;
        cout << "11. Salir" << endl;
        cin >> nombre; 
        switch (nombre)
        {
        case 1:
            cout << "Porcinos FC"<<endl;
            cout << "Presidente: IBAI LLANOS"<< endl;
            cout << "Director Tecnico: Juvenal Edjogo-Owono"<< endl;
            cout << "Porteros: Sergi / J. Segovia" << endl;
            cout << "Defensas: David L.L. / G. Cichero " << endl;
            cout << "Medios: Lao / Carflitos G. / Toti / Espinoza" << endl;
            cout << "Delanteros: Uri Pons / J. Blanco / Killian" << endl;
            

            break;
        case 2: 
            cout << "Rayo de Barcerlona"<<endl;
            cout << "Presidente: DjMaRiio"<< endl;
            cout << "Director Tecnico: Nacho Castro"<< endl;
            cout << "Porteros: Nacho / Lu " << endl;
            cout << "Defensas: Ian / Iker / Guti " << endl;
            cout << "Medios: Lucca / Aleix / Arche / Juanma Glez." << endl;
            cout << "Delanteros: Zea / Llur / " << endl;
        
        default:
            break;
        }
        return 0;
}
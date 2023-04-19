#include <iostream>
using namespace std;

void posicionesKingsleague();
int equiposKingsLeague(int nombre);
int kingsMvp(int mvp);

void posicionesKingsleague(){
cout << "-------- TABLA DE POSICIONES --------" << endl;
cout << "Pos./ Equipo          /PG/PP/GF/GC/DG "<<endl;
cout << "1.  Ultimate Mostoles /08/03/34/27/07 "<<endl;
cout << "2.  Porcinos FC       /07/04/37/26/11 "<<endl;
cout << "3.  Los Troncos FC    /07/04/40/34/06 "<<endl;
cout << "4.  Saiyans FC        /07/04/21/18/03 "<<endl;
cout << "5.  Kunisports        /07/04/23/22/01 "<<endl;
cout << "6.  xBuyer Team       /06/05/25/25/00 "<<endl;
cout << "7.  Aniquiladores FC  /06/05/29/30/-1 "<<endl;
cout << "8.  El Barrio         /05/06/33/25/08 "<<endl;
cout << "9.  1K FC             /05/06/32/34/-2 "<<endl;
cout << "10. Pio FC            /04/07/27/29/-2 "<<endl;
cout << "11. Rayo de Barcelona /03/08/27/40/-13 "<<endl;
cout << "12. Jijantes FC       /01/10/23/41/-18 "<<endl;
}

int equiposKingsLeague(int nombre){
        while (1==1) {
        cout << "Equipos" << endl;
        cout << "1. Porcinos FC" << endl;
        cout << "2. Ultimate Mostoles" << endl;
        cout << "3. Rayo de Barcelona" << endl;
        cout << "4. Los Troncos FC" << endl;
        cout << "5. KunIsports" << endl;
        cout << "6. JIjantes FC" << endl;
        cout << "7. Pio FC" << endl;
        cout << "8. Saiyans FC" << endl;
        cout << "9. El Barrio" << endl;
        cout << "10. 1K FC" << endl;
        cout << "11. Aniquiladores FC" << endl;
        cout << "12. Xbuyer Team" << endl;
        cout << "13. Salir" << endl;
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
            cout << "Ultimate Mostoles"<<endl;
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
}

int kingsMvp(int mvp){
    while(1==1){
    cout << "----- MVPS -----" << endl;
    cout << " 1. Mayor # MVP" << endl;
    cout << " 2. Goleador" << endl;
    cout << " 3. Asistidor" << endl;
    cout << " 4. Salir"<< endl;
    cin >> mvp;
    switch (mvp)
    {
    case 1:
        cout << "Mayor # MVP" << endl;
        cout << "1. MVPS:6 Ubon (El Barrio)" << endl;
        cout << "2. MVPS:5 E. Alvaro (Los Troncos FC)" << endl;
        cout << "3. MVPS:4 F. Hernandez (Aniquiladores FC)" << endl;
        cout << "4. MVPS:4 Juanma Glez (Ultimate Mostoles)" << endl;
        cout << "5. MVPS:3 Briones (Saiyans FC)" << endl;
        break;
    case 2:
        cout << "Goleadores" << endl;
        cout << "1. Goles:17 Ubon (El Barrio)" << endl;
        cout << "2. Goles:15 E. Alvaro (Los Troncos FC)" << endl;
        cout << "3. Goles:13 A. Bueno (1K FC)" << endl;
        cout << "4. Goles:13 R. Carbo (Saiyans FC)" << endl;
        cout << "5. Goles:11 J. Verdu (Los Troncos FC)" << endl;
        break;
    case 3:
        cout << "Asistidores" << endl;
        cout << "1. Asis:8  A. Bueno (1K FC)" << endl;
        cout << "2. Asis:8  J. Verdu (Los Troncos FC)" << endl;
        cout << "3. Asis:7  Espinoza (Porcinos FC)" << endl;
        cout << "4. Asis:13 Beguer (El Barrio)" << endl;
        cout << "5. Asis:11 Coro (Kunisports)" << endl;
        break;
    case 4: 
        return 0;

    default:
        break;
    }

}
}
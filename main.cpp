#include <iostream>
#include <cstdlib>
#include "OilStation.h"
#include "Service.h"
#include "Management.h"
using namespace std;


int main() {
    int op;
    bool repetir = true;

    do {
        system("cls");

        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Agregar un servicio" << endl;
        cout << "2. Consultar servicios" << endl;
        cout << "3. Sumar servicios" << endl;
        cout << "4. Totalizar consumos" << endl;
        cout << "0. Salir" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> op;

        switch (op) {
            case 1:
                Management *mng = new Management();
                string placa, estacion;
                int galones;

                cout<<"Digite la placa del vehiculo"<<endl;
                cin>>placa;
                cout<<"Digite la estación de servicio que lo suministra";
                cin>>estacion;
                cout<<"Digite la cantidad de galones suministrados";
                cin>>galones;


                mng->addService(placa, estacion, galones);

                if(mng->addService(placa, estacion, galones)==false){
                    cout<<"No es posible hacer el proceso, la estación ya existe";
                }else if(mng->addService(placa, estacion, galones)==true){
                    cout<<"Se añadió con exito";
                }

                break;

            case 2:



                break;

            case 3:



                break;

            case 4:



                break;

            case 0:
                repetir = false;
                break;
        }
    } while (repetir);

    return 0;
}

//
// Created by Usuario on 12/11/2021.
//

#ifndef ARANGURENPARCIAL_MANAGEMENT_H
#define ARANGURENPARCIAL_MANAGEMENT_H
#include "Management.h"

class Management {


public:
    Management();
    bool addOilStation(std::string estation, std::string placa, double galones);
    bool addService(std::string placa, std::string estacion, int galones);
    int countService(std::string estacion);
    double sumService(std::string placa);


private:
    OilStation* findOilStation(String idOilStation);
    vector<OilStation*> oilStation;
    vector<*> oilStation;
};


#endif //ARANGURENPARCIAL_MANAGEMENT_H

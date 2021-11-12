//
// Created by Usuario on 12/11/2021.
//

#include "Management.h"

Management::Management() {

}

bool Management::addOilStation(std::string estation, std::string placa, double galones) {

    return false;
}

bool Management::addService(std::string placa, std::string estacion, int galones) {
    findOilStation(placa);
    if (findOilStation(placa) == nullptr) {
        oilStation.push_back(new OilStation(placa, estacion, galones));
        return true;
    }
    return false;

}

int Management::countService(std::string estacion) {

    for (OilStation :OilS) {

    }
    return 0;
}

double Management::sumService(std::string placa) {
    return 0;
}

OilStation *Management::findOilStation(String idOilStation) {
    for (OilStation* oilStation:oilStation) {
        if (oilStation->getIdStation().compare(idOilStation) == 0) {
            return oilStation;
        }
    }
    return nullptr;
}


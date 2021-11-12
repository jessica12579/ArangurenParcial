//
// Created by Usuario on 12/11/2021.
//

#include "OilStation.h"

OilStation::OilStation(const std::__cxx11::basic_string<char> &idStation,
                       const std::__cxx11::basic_string<char> &descripcion, double galonCost) : idStation(idStation),
                                                                                                descripcion(
                                                                                                        descripcion),
                                                                                                galonCost(galonCost) {}

const std::__cxx11::basic_string<char> &OilStation::getIdStation() const {
    return idStation;
}

void OilStation::setIdStation(const std::__cxx11::basic_string<char> &idStation) {
    OilStation::idStation = idStation;
}

const std::__cxx11::basic_string<char> &OilStation::getDescripcion() const {
    return descripcion;
}

void OilStation::setDescripcion(const std::__cxx11::basic_string<char> &descripcion) {
    OilStation::descripcion = descripcion;
}

double OilStation::getGalonCost() const {
    return galonCost;
}

void OilStation::setGalonCost(double galonCost) {
    OilStation::galonCost = galonCost;
}

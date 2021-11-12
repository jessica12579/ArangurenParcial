//
// Created by Usuario on 12/11/2021.
//

#include <string>
#include "Service.h"

Service::Service(const std::__cxx11::basic_string<char> &vehiclePlate, int galons, double serviceValue) : vehiclePlate(
        vehiclePlate), galons(galons), serviceValue(serviceValue) {}

const std::__cxx11::basic_string<char> &Service::getVehiclePlate() const {
    return vehiclePlate;
}

int Service::getGalons() const {
    return galons;
}

double Service::getServiceValue() const {
    return serviceValue;
}

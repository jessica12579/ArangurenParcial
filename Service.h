//
// Created by Usuario on 12/11/2021.
//

#ifndef ARANGURENPARCIAL_SERVICE_H
#define ARANGURENPARCIAL_SERVICE_H



class Service {
public:
    Service();
    Service(const std::string &vehiclePlate, int galons, double serviceValue);

    const std::string &getVehiclePlate() const;

    int getGalons() const;

    double getServiceValue() const;

private:
    std::string vehiclePlate;
int galons;
double serviceValue;

};


#endif //ARANGURENPARCIAL_SERVICE_H

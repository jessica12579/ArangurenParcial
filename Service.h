//
// Created by Usuario on 12/11/2021.
//

#ifndef ARANGURENPARCIAL_SERVICE_H
#define ARANGURENPARCIAL_SERVICE_H


class Service {

public:
    Service();
    Service(const std::string &vehiclePlace, int galons, double galonCost);


private:
    std:: string vehiclePlace;
    int galons;
    double serviceValue;
};


#endif //ARANGURENPARCIAL_SERVICE_H

//
// Created by Jessica Aranguren on 12/11/2021.
//

#ifndef ARANGURENPARCIAL_OILSTATION_H
#define ARANGURENPARCIAL_OILSTATION_H


class OilStation {
public:
    OilStation();

    OilStation(const std::string &idStation, const std::string &descripcion, double galonCost);

    const std::string &getIdStation() const;

    void setIdStation(const std::string &idStation);

    const std::string &getDescripcion() const;

    void setDescripcion(const std::string &descripcion);

    double getGalonCost() const;

    void setGalonCost(double galonCost);

private:
   std::string idStation;
    std:: string descripcion;
    double galonCost;
};


#endif //ARANGURENPARCIAL_OILSTATION_H

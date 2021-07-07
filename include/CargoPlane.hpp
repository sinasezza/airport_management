#include "Airplane.hpp"
#ifndef CARGOPLANE_HPP
#define CARGOPLANE_HPP

class CargoPlane : public AirPlane{

    public:
        CargoPlane();
        ~CargoPlane();
        virtual void SetCapasity(double Maximum_number_of_passengers) override;
        virtual double GetCapacity()    const override;
    private:
        double capacity;
};




#endif
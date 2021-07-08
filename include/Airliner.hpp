#include "Airplane.hpp"
#ifndef AIRLINER_HPP
#define AIRLINER_HPP

class Airliner : public AirPlane {
    public:
        Airliner();
        Airliner(string Identity,double capacity_of_airplane);
        ~Airliner();
        virtual void    SetCapasity(double Maximum_number_of_passengers) override;
        virtual double  GetCapacity()    const override;
        virtual void    PrintInfo()   const override;
    private:
        size_t capacity;

};

#endif
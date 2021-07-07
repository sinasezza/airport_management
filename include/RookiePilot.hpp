#include "Pilot.hpp"
#ifndef ROOKIEPILOT_HPP
#define ROOKIEPILOT_HPP

class RookiePilot : public Pilot{
 
    public:
        RookiePilot();
        ~RookiePilot();

        virtual void                SetNumberOfFlights(unsigned short int somedigit) override ;
        virtual unsigned short int  GetNumberOfFlight() const override;
    private:   
        unsigned short int NumberOfFlights; 
};





#endif
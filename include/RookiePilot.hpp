#include "Pilot.hpp"
#ifndef ROOKIEPILOT_HPP
#define ROOKIEPILOT_HPP

class RookiePilot : public Pilot{
 
    public:
        RookiePilot();
        RookiePilot(std::string lastname,string ID,unsigned short int age,unsigned short int flight_num);
        ~RookiePilot();

        virtual void                SetNumberOfFlights(unsigned short int somedigit)  override;
        virtual unsigned short int  GetNumberOfFlights() const override ;

        virtual void                SetProfessionalDegree(unsigned short int somedigit) override ;
        virtual unsigned short int  GetProfessionalDegree() const override ;

        virtual void                PrintInfo() const;
    
    private:   
        unsigned short int NumberOfFlights; 
};





#endif
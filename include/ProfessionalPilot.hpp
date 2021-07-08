#include "Pilot.hpp"
#ifndef PROFESSIONALPILOT_HPP
#define PROFESSIONALPILOT_HPP

class ProfessionalPilot : public Pilot{

    public:
        ProfessionalPilot();
        ProfessionalPilot(std::string lastname,string ID,unsigned short int age,unsigned short int prof_degree);
        ~ProfessionalPilot();

        virtual void                SetProfessionalDegree(unsigned short int somedigit) override;
        virtual unsigned short int  GetProfessionalDegree() const override ;

        virtual void                SetNumberOfFlights(unsigned short int somedigit) override ;
        virtual unsigned short int  GetNumberOfFlights() const override ;

        virtual void                PrintInfo() const;
    
    private:
        unsigned short int ProfessionalDegree;  
    
};





#endif
#include "Pilot.hpp"
#ifndef PROFESSIONALPILOT_HPP
#define PROFESSIONALPILOT_HPP

class ProfessionalPilot : public Pilot{

    public:
        ProfessionalPilot(/* args */);
        ~ProfessionalPilot();

        virtual void                SetProfessionalDegree(unsigned short int somedigit) override;
        virtual unsigned short int  GetProfessionalDegree() const override;
    
    private:
        unsigned short int ProfessionalDegree;  
    
};





#endif
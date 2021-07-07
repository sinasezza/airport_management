#include "../include/ProfessionalPilot.hpp"


ProfessionalPilot::ProfessionalPilot(/* args */)
{
}
//-------------------------------------------------
ProfessionalPilot::~ProfessionalPilot()
{

}
//------------------------------------------------
void  ProfessionalPilot::SetProfessionalDegree(unsigned short int somedigit)  
{
    // if(somedigit > 2 or somedigit < 1 )
    //     raise exception...
    this -> ProfessionalDegree = somedigit;
}
//----------------------------------------------------------
unsigned short int  ProfessionalPilot::GetProfessionalDegree() const 
{
    return this -> ProfessionalDegree;
}
//----------------------------------------------------------
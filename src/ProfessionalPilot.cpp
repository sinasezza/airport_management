#include "../include/ProfessionalPilot.hpp"


ProfessionalPilot::ProfessionalPilot()
{

}
//---------------------------------------------------------------------
ProfessionalPilot::ProfessionalPilot(std::string lastname,string ID,unsigned short int age,unsigned short int prof_degree)
: Pilot(lastname,ID,age)
{
    this -> SetProfessionalDegree(prof_degree);
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
void ProfessionalPilot::PrintInfo() const
{
    Pilot::PrintInfo();
    cout<<setw(40)<<"Professional Degree : "<<GetProfessionalDegree()<<endl;
}
//----------------------------------------------------------
void                ProfessionalPilot::SetNumberOfFlights(unsigned short int somedigit)  {}
unsigned short int  ProfessionalPilot::GetNumberOfFlights() const  {return 0;}
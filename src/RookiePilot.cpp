#include "../include/RookiePilot.hpp"

RookiePilot::RookiePilot()
{

}
//--------------------------------------------------------------
RookiePilot::RookiePilot(std::string lastname,string ID,unsigned short int age,unsigned short int flight_num)
: Pilot(lastname,ID,age)
{
    this -> SetNumberOfFlights(flight_num);
}
//--------------------------------------------------------------

RookiePilot::~RookiePilot()
{

}
//--------------------------------------------------------------
void RookiePilot::SetNumberOfFlights(unsigned short int somedigit)  
{
    // if(somedigit < 0)
    //     raise exception...
    this -> NumberOfFlights = somedigit;
}
//-----------------------------------------------------------------
unsigned short int  RookiePilot::GetNumberOfFlights() const 
{
    return this -> NumberOfFlights;
}
//-----------------------------------------------------------------
void RookiePilot::PrintInfo() const
{
    Pilot::PrintInfo();
    cout<<setw(40)<<"Number Of Flights : "<<GetNumberOfFlights()<<endl;
}
//-----------------------------------------------------------------
void                RookiePilot::SetProfessionalDegree(unsigned short int somedigit){}
unsigned short int  RookiePilot::GetProfessionalDegree() const{return 0;}

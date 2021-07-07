#include "../include/RookiePilot.hpp"

RookiePilot::RookiePilot(/* args */)
{

}

//--------------------------------------------------------------

RookiePilot::~RookiePilot(/* args */)
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
unsigned short int  RookiePilot::GetNumberOfFlight() const 
{
    return this -> NumberOfFlights;
}
//-----------------------------------------------------------------

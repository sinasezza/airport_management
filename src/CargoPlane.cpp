#include "../include/CargoPlane.hpp"

CargoPlane::CargoPlane()
{
}
//-----------------------------------------------------------
CargoPlane::CargoPlane(string Identity,double capacity_of_airplane)
{
    this -> SetIdentityCode(Identity);
    this -> SetCapasity(capacity_of_airplane);
}
//-----------------------------------------------------------
CargoPlane::~CargoPlane()
{
}
//-----------------------------------------------------------
void CargoPlane::SetCapasity(double Maximum_number_of_passengers)
{
    this -> capacity = Maximum_number_of_passengers;
}
//---------------------------------------------------------------
double CargoPlane::GetCapacity()    const 
{
    return this -> capacity;
}
//----------------------------------------------------------------
void CargoPlane::PrintInfo()  const
{
    AirPlane::PrintInfo();
    cout<<setw(40)<<"capacity : "<<GetCapacity()<<" Tone(s)"<<endl;
}
#include "../include/CargoPlane.hpp"

CargoPlane::CargoPlane(/* args */)
{
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
#include "../include/Airliner.hpp"
#include <iostream>
#include <algorithm>

Airliner::Airliner()
{
    //this is default constructor
}
//---------------------------------------------
Airliner::~Airliner()
{
    //this is default dedstructor
}
//---------------------------------------------
void Airliner::SetCapasity(double Maximum_number_of_passengers)
{
    // if(Maximum_number_of_passengers != int(Maximum_number_of_passengers) or
    //     Maximum_number_of_passengers < 0 )
    //     throw exception...
    this -> capacity = Maximum_number_of_passengers;
}
//---------------------------------------------------------------
double Airliner::GetCapacity()    const 
{
    return this -> capacity;
}
//----------------------------------------------------------------

#include "../include/Pilot.hpp"

Pilot::Pilot()
{
    //this is default constructor....
}
//----------------------------------------------------------------
void Pilot::SetLastName(string somename)
{
    LastName = somename;
}
//-------------------------------------------------------------------
string Pilot::GetLastName()  const
{
    return LastName;
}
//-------------------------------------------------------------------------
void Pilot::SetIdentityCode(string something)
{
    IdentityCode = something;
}
//-------------------------------------------------------------------------
string Pilot::GetIdentityCode() const
{
    return IdentityCode;
}
//-------------------------------------------------------------------------
void Pilot::SetAge(unsigned short int somedigit)
{
    // if(somedigit > 50 and somedigit < 25)
    //     raise exception...
    Age = somedigit;
}
//-------------------------------------------------------------------------
unsigned short int Pilot::GetAge() const
{
    return Age;
}
//-------------------------------------------------------------------------
#include "../include/AirPlane.hpp"

AirPlane::AirPlane()
{
    //this is default constructor....
}

//----------------------------------------------------------------
void AirPlane::SetIdentityCode(std::string something)
{
    IdentityCode = something;
}
//----------------------------------------------------------------
std::string AirPlane::GetIdentityCode()
{
    return IdentityCode;
}
//----------------------------------------------------------------

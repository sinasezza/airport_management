#include "../include/AirPlane.hpp"


AirPlane::AirPlane()
{
    //this is default constructor....
}
//----------------------------------------------------------------
void AirPlane::SetIdentityCode(std::string something) 
{
    this -> IdentityCode = something;
}
//----------------------------------------------------------------
std::string AirPlane::GetIdentityCode()  const
{
    return this -> IdentityCode;
}
//----------------------------------------------------------------
void AirPlane::PrintInfo()  const
{
    cout<<setw(40)<<"Identity code :"<<GetIdentityCode()<<endl;
}
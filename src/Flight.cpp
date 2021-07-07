#include "../include/Flight.hpp"

Flight::Flight(/* args */)
{

}
//----------------------------------------------------------
Flight::~Flight()
{

}
//----------------------------------------------------------
void    Flight::SetOrigin(string somename)
{
    this -> Origin = somename;
}
//--------------------------------/\/\/\/\/\/\\/\//\\/
string  Flight::GetOrigin() const 
{
    return this-> Origin;
}
//----------------------------------------------------------

void    Flight::SetDestination(string something)
{
    this -> Destination = something;
}
//--------------------------------------/\/\/\/\/\/\\/\//\\/
string  Flight::GetDestination() const 
{
    return this -> Destination;
}
//----------------------------------------------------------

void    Flight::SetAirPlaneIdentityCode(string somename)
{
    this -> AirPlaneIdentityCode = somename;
}
//-----------------------------------------/\/\/\/\/\/\\/\//\\/
string  Flight::GetAirPlaneIdentityCode() const 
{
    return this -> AirPlaneIdentityCode;
}
//----------------------------------------------------------

void    Flight::SetPilotIdentityCode(string something)
{
    this -> PilotIdentityCode = something;
}
//------------------------------------/\/\/\/\/\/\\/\//\\/
string  Flight::GetPilotIdentityCode() const 
{
    return this -> PilotIdentityCode;
}
//----------------------------------------------------------
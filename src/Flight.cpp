#include "../include/Flight.hpp"

Flight::Flight(/* args */)
{

}
//----------------------------------------------------------
Flight::Flight(string origin,string destination,string airplane_ID,string pilot_ID)
{
    this -> SetOrigin(origin);
    this -> SetDestination(destination);
    this -> SetAirPlaneIdentityCode(airplane_ID);
    this -> SetPilotIdentityCode(pilot_ID);
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
void Flight::PrintInfo()    const
{
    cout<<setw(40)<<"Origin"<<" : "<<GetOrigin()<<endl
        <<setw(40)<<"Destination"<<" : "<<GetDestination()<<endl
        <<setw(40)<<"AirPlane Identity Code"<<" : "<<GetAirPlaneIdentityCode()<<endl
        <<setw(40)<<"Pilot Identity Code"<<" : "<<GetPilotIdentityCode()<<endl;
}
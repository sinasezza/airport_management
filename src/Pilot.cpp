#include "../include/Pilot.hpp"

Pilot::Pilot()
{
    //this is default constructor....
}
//------------------------------------------------------------------------
Pilot::~Pilot()
{

}
//------------------------------------------------------------------------
Pilot::Pilot(std::string lastname,string ID,unsigned short int age)
{
    this -> SetLastName(lastname);
    this -> SetIdentityCode(ID);
    this -> SetAge(age);
}
//------------------------------------------------------------------------
void Pilot::SetLastName(string somename)
{
    this ->LastName = somename;
}
//------------------------------------------------------------------------
string Pilot::GetLastName()  const
{
    return this -> LastName;
}
//-------------------------------------------------------------------------
void Pilot::SetIdentityCode(string something)
{
    this -> IdentityCode = something;
}
//-------------------------------------------------------------------------
string Pilot::GetIdentityCode() const
{
    return this -> IdentityCode;
}
//-------------------------------------------------------------------------
void Pilot::SetAge(unsigned short int somedigit)
{
    // if(somedigit > 50 and somedigit < 25)
    //     raise exception...
    this -> Age = somedigit;
}
//-------------------------------------------------------------------------
unsigned short int Pilot::GetAge() const
{
    return this -> Age;
}
//-------------------------------------------------------------------------
void Pilot::PrintInfo() const
{
    cout<<setw(40)<<"Last Name : "<<GetLastName()<<endl
    <<setw(40)<<"Identity Code  : "<<GetIdentityCode()<<endl
    <<setw(40)<<"Age : "<<GetAge()<<endl;
}
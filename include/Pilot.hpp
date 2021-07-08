#ifndef PILOT_HPP
#define PILOT_HPP

#include <string>
using std::string;

#include <iostream>
using namespace std;

#include <iomanip>
class Pilot
{
    public:
        Pilot();
        Pilot(std::string lastname,string ID,unsigned short int age);
        ~Pilot();
        
        void                SetLastName(string somename);
        string              GetLastName() const ;

        void                SetIdentityCode(string something);
        string              GetIdentityCode() const ;

        void                SetAge(unsigned short int somedigit);
        unsigned short int  GetAge() const ;

        virtual void                SetProfessionalDegree(unsigned short int somedigit) =0 ;
        virtual unsigned short int  GetProfessionalDegree() const = 0 ;

        virtual void                SetNumberOfFlights(unsigned short int somedigit) =0 ;
        virtual unsigned short int  GetNumberOfFlights() const = 0 ;

        virtual void                PrintInfo() const;

    private:
        std::string LastName;
        std::string IdentityCode;
        unsigned short int Age;
        
        

};





#endif
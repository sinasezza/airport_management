#include <string>
using std::string;
#ifndef PILOT_HPP
#define PILOT_HPP

class Pilot
{
    public:
        Pilot();
        void                SetLastName(string somename);
        string              GetLastName() const ;

        void                SetIdentityCode(string something);
        string              GetIdentityCode() const ;

        void                SetAge(unsigned short int somedigit);
        unsigned short int  GetAge() const ;

        virtual void                SetProfessionalDegree(unsigned short int somedigit) =0 ;
        virtual unsigned short int  GetProfessionalDegree() const = 0;

        virtual void                SetNumberOfFlights(unsigned short int somedigit) =0 ;
        virtual unsigned short int  GetNumberOfFlight() const = 0;

    private:
        std::string LastName;
        std::string IdentityCode;
        unsigned short int Age;
        
        

};





#endif
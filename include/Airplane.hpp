#ifndef AIRPLANE_HPP
#define AIRPLANE_HPP

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class AirPlane{
    public:
        AirPlane();
        void            SetIdentityCode(string something);
        string          GetIdentityCode()    const ;

        virtual void    SetCapasity(double Maximum_number_of_passengers) = 0;
        virtual double  GetCapacity()    const = 0;

        virtual void    PrintInfo()   const ;
    private:
        string IdentityCode;
        

};




#endif
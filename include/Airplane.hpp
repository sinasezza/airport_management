
#include <string>

using std::string;

#ifndef AIRPLANE_HPP
#define AIRPLANE_HPP

class AirPlane{
    public:
        AirPlane();
        void SetIdentityCode(string something);
        string GetIdentityCode();

        virtual void SetCapasity(double Maximum_number_of_passengers) = 0;
        virtual double GetCapacity()    const = 0;
    private:
        string IdentityCode;
        

};




#endif
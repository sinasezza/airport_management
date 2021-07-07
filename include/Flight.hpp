#include "Pilot.hpp"
#include "Airplane.hpp"
#include <string>


#ifndef FLIGHT_HPP
# define FLIGHT_HPP

class Flight{

    public:
        Flight();
        ~Flight();

        void                SetOrigin(string somename);
        string              GetOrigin() const ;

        void                SetDestination(string something);
        string              GetDestination() const ;

        void                SetAirPlaneIdentityCode(string somename);
        string              GetAirPlaneIdentityCode() const ;

        void                SetPilotIdentityCode(string something);
        string              GetPilotIdentityCode() const ;
    private:
        std::string Origin;
        std::string Destination;
        std::string AirPlaneIdentityCode;
        std::string PilotIdentityCode;

    
};





#endif
#ifndef FLIGHT_HPP
# define FLIGHT_HPP

#include "Pilot.hpp"
#include "Airplane.hpp"
#include <string>
#include <iostream>

using namespace std;

class Flight{

    public:
        Flight();
        Flight(string origin,string destination,string airplane_ID,string pilot_ID);
        ~Flight();

        void                SetOrigin(string somename);
        string              GetOrigin() const ;

        void                SetDestination(string something);
        string              GetDestination() const ;

        void                SetAirPlaneIdentityCode(string somename);
        string              GetAirPlaneIdentityCode() const ;

        void                SetPilotIdentityCode(string something);
        string              GetPilotIdentityCode() const ;

        void                PrintInfo() const;
    
    //=======================================
    //=======================================
    
    private:
        std::string Origin;
        std::string Destination;
        std::string AirPlaneIdentityCode;
        std::string PilotIdentityCode; 
};





#endif
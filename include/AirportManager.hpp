#include <array>
#include <vector>
#include <iostream>
using namespace std;

#include "Pilot.hpp"
#include "ProfessionalPilot.hpp"
#include "RookiePilot.hpp"

#include "Airplane.hpp"
#include "Airliner.hpp"
#include "CargoPlane.hpp"

#include "Flight.hpp"

#include "UserMenu.hpp"

#ifndef AIRPORTMANAGER_HPP
#define AIRPORTMANAGER_HPP


class AirportManager{
    friend class UserMenu;
    public:
        AirportManager();
        ~AirportManager();

        void PrintLine(char somechar = '-');
        void clear();

        void AddAirplane();
        void DeleteAirplane();

        void AddFlight();
        void DeleteFlight();

        void AddPilot();
        void DeletePilot();
        
    private:
        std::vector<Flight*> flight;
        std::vector<AirPlane*> airplane ;
        std::vector<Pilot*> pilot;

        const  size_t   NumberOfAirplanes = 20,
                        NumberOFPilots =10,
                        NumberOFFlights = 8;
        
        

};




#endif
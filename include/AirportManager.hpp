#include <array>
#include <vector>

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
        
    private:
        std::vector<Flight*> flight;
        std::vector<AirPlane*> airplane ;
        std::vector<Pilot*> pilot;
        
        

};




#endif
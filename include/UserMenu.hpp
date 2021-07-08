#ifndef USERMENU_HPP
#define USERMENU_HPP

//#include <unistd.h>
#include <windows.h>
#include <string>
#include "AirportManager.hpp"
using std::string;
#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#include <iomanip>
#include <conio.h>
#include <typeinfo>

class UserMenu
{

    public:
        UserMenu();
        ~UserMenu();
        void MenuManager();
        void ShowMenu();
        void clear();
        void ShowLoadingTitle();
        int  GetOptionFromUser();
        void Exit();
        bool Confirm(string some_title);
        void PrintLine(char somechar = '-');
       
        void AddAirplane();
        void DeleteAirplane();

        void AddFlight();
        void DeleteFlight();

        void AddPilot();
        void DeletePilot();

        void ShowAllFlightsReport();
        void ShowAllAirplanesReport();
        void ShowAllPilotsReport();

        void StateFunc();
    
    private:
        AirportManager airportmanager;
        const  size_t NumberOfAirplanes = 20,NumberOFPilots =10,NumberOFFlights = 8;
        
};









#endif
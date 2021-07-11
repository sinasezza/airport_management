cmake_minimum_required(VERSION 2.9)

project(AirportManagement)

include_directories(include)

add_executable( run 
                src/main.cpp
                src/Airliner.cpp
                src/AirPlane.cpp
                src/AirPortManager.cpp
                src/CargoPlane.cpp
                src/Flight.cpp
                src/Pilot.cpp
                src/ProfessionalPilot.cpp
                src/RookiePilot
                src/UserMenu.cpp)
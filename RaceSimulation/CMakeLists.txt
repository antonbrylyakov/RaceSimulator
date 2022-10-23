cmake_minimum_required(VERSION 3.10)
project(RaceSimulation)
add_library(RaceSimulation SHARED
Camel.cpp
Camel.h
GroundVehicle.cpp
GroundVehicle.h
Race.cpp
Race.h
Vehicle.cpp
Vehicle.h
VehicleType.h
main.cpp
)
target_compile_definitions(RaceSimulation PRIVATE RACESIMULATION_EXPORTS)
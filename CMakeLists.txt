cmake_minimum_required(VERSION 3.16)
project(wks_BE)

set(CMAKE_CXX_STANDARD 14)

include_directories(archi'pelle_API)
include_directories(archi'pelle_API/Actuators)
include_directories(archi'pelle_API/Actuators/PumpStates)
include_directories(archi'pelle_API/plant)
include_directories(archi'pelle_API/Sensors)

add_executable(wks_BE
        archi'pelle_API/main.cpp
        archi'pelle_API/Sensors/AbstractSensor.cpp archi'pelle_API/Sensors/AbstractSensor.h archi'pelle_API/Sensors/phMeter.cpp archi'pelle_API/Sensors/phMeter.h archi'pelle_API/Sensors/conductiMeter.cpp archi'pelle_API/Sensors/conductiMeter.h archi'pelle_API/System.cpp archi'pelle_API/System.h archi'pelle_API/Plants/Plant.cpp archi'pelle_API/Plants/Plant.h archi'pelle_API/Plants/States/IStatePlant.cpp archi'pelle_API/Plants/States/IStatePlant.h archi'pelle_API/Plants/States/StateGood.cpp archi'pelle_API/Plants/States/StateGood.h archi'pelle_API/Plants/States/StateNotGood.cpp archi'pelle_API/Plants/States/StateNotGood.h archi'pelle_API/Actuators/AbstractActuator.cpp archi'pelle_API/Actuators/AbstractActuator.h archi'pelle_API/Actuators/Pump.cpp archi'pelle_API/Actuators/Pump.h archi'pelle_API/Actuators/ActuatorState.cpp archi'pelle_API/Actuators/ActuatorState.h archi'pelle_API/Actuators/Actuators.h)

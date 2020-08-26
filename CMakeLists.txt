# CMakeList.txt : CMake project for CMakeExo, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeExo")
add_subdirectory(Sensors)
add_subdirectory(Observers)
add_subdirectory(Managers)
add_subdirectory(Communication)

# Add source to this project's executable.
add_executable (CMakeExo "CMakeExo.cpp" "CMakeExo.h" "Communication/Src/Ethernet.cpp" "Communication/Src/Communication.cpp" "Communication/Include/Communication.h" "Filters/Src/BaseFilter.cpp" "Filters/Include/BaseFilter.h")

# TODO: Add tests and install targets if needed.

message("Building.")
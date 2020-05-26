#include <string>
#include "Gyro.h"
using namespace std;

Gyro::Gyro(string name, int byte_list[], string side) : Sensor(name, byte_list, side, 1) {
    Sensor::SETTYPE("Gyro");

}

Gyro::~Gyro() {
    // TODO Auto-generated destructor stub
}

double Gyro::SUPOFFSET() {
    return Sensor::GETOFFSET();
}

double Gyro::SUPORIENTATION() {
    return Sensor::GETORIENTATION();
}

bool Gyro::RESET() {
    return true;
}

void Gyro::SUPSETRAWVALS(int blocks[]) {
    Sensor::SETRAWVALS(blocks);
}
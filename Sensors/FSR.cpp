#include <string>
#include "FSR.h"
using namespace std;

FSR::FSR(string name, int byte_list[], string side) : Sensor(name, byte_list, side, 1) {
    Sensor::SETTYPE("FSR");

}

FSR::~FSR() {
    // TODO Auto-generated destructor stub
}

double FSR::SUPOFFSET() {
    return Sensor::GETOFFSET();
}

double FSR::SUPORIENTATION() {
    return Sensor::GETORIENTATION();
}

bool FSR::RESET() {
    return true;
}

void FSR::SUPSETRAWVALS(int blocks[]) {
    Sensor::SETRAWVALS(blocks);
}
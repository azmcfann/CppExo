#include <string>
#include "Mag.h"
using namespace std;

Mag::Mag(string name, int byte_list[], string side) : Sensor(name, byte_list, side, 1) {
    Sensor::SETTYPE("Mag");

}

Mag::~Mag() {
    // TODO Auto-generated destructor stub
}

double Mag::SUPOFFSET() {
    return Sensor::GETOFFSET();
}

double Mag::SUPORIENTATION() {
    return Sensor::GETORIENTATION();
}

bool Mag::RESET() {
    return true;
}

void Mag::SUPSETRAWVALS(int blocks[]) {
    Sensor::SETRAWVALS(blocks);
}
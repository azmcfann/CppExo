#include <string>
#include "Mag.h"
using namespace std;

Mag::Mag(string name, int byte_list[], string side) : Sensor(name, byte_list, side, 1) {
    Sensor::SETTYPE("Mag");

}

Mag::~Mag() {
    // TODO Auto-generated destructor stub
}

bool Mag::RESET() {
    return true;
}

// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#include <string>
#include "Accel.h"
using namespace std;

Accel::Accel(string name, int byte_list[], string side) : Sensor(name, byte_list, side, 1) {
    Sensor::SETTYPE("Accel");
    VALUES[0] = 0;
}

Accel::~Accel() {
}

bool Accel::RESET() {
    return true;
}


void Accel::ACCELSETRAWVALS(int BYTES[]) {
    int DECIMAL = Sensor::BINTODEC(BYTES);
    VALUES[0] = DECIMAL;
    Sensor::SETRAWVALS(VALUES);
}
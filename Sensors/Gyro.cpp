// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#include <string>
#include "Gyro.h"
using namespace std;

Gyro::Gyro(string name, int byte_list[], string side) : Sensor(name, byte_list, side, 1) {
    Sensor::SETTYPE("Gyro");
    VALUES[0] = 0;
}

Gyro::~Gyro() {
}

bool Gyro::RESET() {
    return true;
}

void Gyro::GYROSETRAWVALS(int BYTES[]) {
    int DECIMAL = Sensor::BINTODEC(BYTES);
    VALUES[0] = DECIMAL;
    Sensor::SETRAWVALS(VALUES);
}
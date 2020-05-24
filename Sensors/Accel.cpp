/*
 * Accel.cpp
 *
 *  Created on: May 19, 2020
 *      Author: Owner
 */
#include <string>
#include "Accel.h"
using namespace std;

Accel::Accel(string name, int byte_list[], string side) : Sensor(name, byte_list, side, 1) {


}

Accel::~Accel() {
    // TODO Auto-generated destructor stub
}

double Accel::SUPOFFSET() {
    return Sensor::GETOFFSET();
}

double Accel::SUPORIENTATION() {
    return Sensor::GETORIENTATION();
}

bool Accel::RESET() {
    return true;
}

void Accel::SUPSETRAWVALS(int blocks[]) {
    //TODO after figuring out sensor.cpp parsing

}
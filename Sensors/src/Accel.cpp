/*
 * Accel.cpp
 *
 *  Created on: May 19, 2020
 *      Author: Owner
 */
#include <string>
#include "Accel.h"
using namespace std;

Accel::Accel(string name, int byte_list[], string side) : Sensor(name, byte_list, side, 1); {


}

Accel::~Accel() {
	// TODO Auto-generated destructor stub
}

double SUPOFFSET(){
	return GETOFFSET();
}

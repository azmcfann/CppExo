// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#include <string>
#include "FSR.h"
using namespace std;

FSR::FSR(string name, int byte_list[], string side) : Sensor(name, byte_list, side, 1) {
	Sensor::SETTYPE("FSR");
	VALUES[0] = 0;
}

FSR::~FSR() {
}

bool FSR::RESET() {
	return true;
}

void FSR::FSRSETRAWVALS(int BYTES[]) {
	int DECIMAL = Sensor::BINTODEC(BYTES);
	VALUES[0] = DECIMAL;
	Sensor::SETRAWVALS(VALUES);
}
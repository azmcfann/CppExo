#include "Temperature.h"
#include <string>
#include "Sensor.h"
using namespace std;

Temperature::Temperature(string NAME, int BYTELIST[], string SIDE) : Sensor(NAME, BYTELIST, SIDE, 1) {
	Sensor::SETTYPE("Temperature");
}

Temperature::~Temperature() {

}

double Temperature::SUPGETOFFSET() {
	return Sensor::GETOFFSET();
}

double Temperature::SUPGETORIENT() {
	return Sensor::GETORIENTATION();
}

bool Temperature::RESET() {
	return true;
}

void Temperature::SUPSETRAWVALS(int blocks[]) {
	Sensor::SETRAWVALS(blocks);
}
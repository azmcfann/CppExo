#include "Temperature.h"
#include <string>
#include "Sensor.h"
using namespace std;

Temperature::Temperature(string NAME, int BYTELIST[], string SIDE) : Sensor(NAME, BYTELIST, SIDE, 1) {

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
	//TODO implements the parse method, how does it work?
}
//TODO parse method. empty method, assuming it passes to the sensor parser
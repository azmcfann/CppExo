#include "Temperature.h"
#include <string>
#include "Sensor.h"
using namespace std;

Temperature::Temperature(string NAME, int BYTELIST[], string SIDE) : Sensor(NAME, BYTELIST, SIDE, 1) {
	Sensor::SETTYPE("Temperature");
}

Temperature::~Temperature() {

}

bool Temperature::RESET() {
	return true;
}

#include "Counter.h"
#include <string>
#include "Sensor.h"

using namespace std;

Counter::Counter(string NAME, int BYTELIST[], string SIDE) : Sensor(NAME, BYTELIST, SIDE, 1) {
	Sensor::SETTYPE("Counter");
}
Counter::~Counter() {

}

double Counter::SUPGETOFFSET() {
	return Sensor::GETOFFSET();
}

double Counter::SUPGETORIENT() {
	return Sensor::GETORIENTATION();
}

bool Counter::RESET() {
	return true;
}

void Counter::SUPSETRAWVAL(int blocks[]) {
	Sensor::SETRAWVALS(blocks);
}
//TODO parse method. empty method, assuming it passes to the sensor parser
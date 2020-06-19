// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#include "Counter.h"
#include <string>
#include "Sensor.h"

using namespace std;

Counter::Counter(string NAME, int BYTELIST[], string SIDE) : Sensor(NAME, BYTELIST, SIDE, 1) {
	Sensor::SETTYPE("Counter");
	VALUES[0] = 0;
}
Counter::~Counter() {

}

bool Counter::RESET() {
	return true;
}

void Counter::COUNTSETRAWVALS(int BYTES[]) {
	int DECIMAL = Sensor::BINTODEC(BYTES);
	VALUES[0] = DECIMAL;
	Sensor::SETRAWVALS(VALUES);
}

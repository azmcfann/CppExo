// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann
#include "FilterManager.h"
#include <string>
#include "Sensor.h"
using namespace std;
int onefivesix[8] = { 1, 0, 0, 1, 1, 1, 0, };
Sensor emptysensor("empty", onefivesix, "left", 3);
FilterManager::FilterManager() {
	SENSORAMMT = 0;
	for (int x = 0; x < 5; x++) {
		ADDSENSOR(emptysensor);
	}
}

FilterManager::~FilterManager() {

}

void FilterManager::ADDSENSOR(Sensor S) {

}
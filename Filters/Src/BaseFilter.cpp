#include "Filters/BaseFilter.h"
#include <string>

using namespace std;

BaseFilter::BaseFilter(Sensor newSen) {
	this.thisSensor = newSen;
	this.values = { 0, 0, 0, 0,
		0, 0, 0, 0 };
}

int* BaseFilter::Update(int* newVal){
//TODO
	this.values = newval;
	return *value;
}


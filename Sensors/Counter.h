#pragma once

#ifndef COUNTER_H_
#define COUNTER_H_
#include <string>
#include "Sensor.h"

class Counter : public Sensor {
public:
	Counter(string, int[], string);
	virtual ~Counter();

	double SUPGETOFFSET();
	double SUPGETORIENT();

	bool RESET();

	void SUPSETRAWVAL(int[]);

private:

};

#endif /* COUNTER_H_ */
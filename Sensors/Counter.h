#pragma once
// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#ifndef COUNTER_H_
#define COUNTER_H_
#include <string>
#include "Sensor.h"

class Counter : public Sensor {
public:
	Counter(string, int[], string);
	Counter() = default;
	virtual ~Counter();

	bool RESET();

	void COUNTSETRAWVALS(int[]);

private:
	int VALUES[1];
};

#endif /* COUNTER_H_ */
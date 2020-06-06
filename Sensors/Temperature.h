#pragma once
#pragma once
#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_
#include <string>
#include "Sensor.h"

class Temperature : public Sensor {
public:
	Temperature(string, int[], string);
	Temperature() = default;
	
	virtual ~Temperature();

	bool RESET();

private:

};

#endif /* TEMPERATURE_H_ */
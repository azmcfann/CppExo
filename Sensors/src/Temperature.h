#pragma once
#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_
#include <string>
#include "Sensor.h"

class Temperature : public Sensor {
public:
	Temperature(string, int[], string);
	virtual ~Temperature();

	double SUPGETOFFSET();
	double SUPGETORIENT();

	bool RESET();

	void SUPSETRAWVALS(int[]);
private:
	
};
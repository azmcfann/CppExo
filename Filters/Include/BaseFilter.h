#pragma once
#ifndef BASEFILTER_H_
#define BASEFILTER_H_

#include <string>
#include "Sensor.h"

class BaseFilter {
public:
	BaseFilter(Sensor);
	virtual ~BaseFilter();

private:
	Sensor thisSensor;
	int[8] value;
};
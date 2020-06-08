#pragma once
#ifndef FILTERMANAGER_H_
#define FILTERMANAGER_H_
#include "Manager.h"
#include "Sensor.h"

class FilterManager : public Manager {
public:
	FilterManager();
	virtual ~FilterManager();
private:
	Sensor _SENSORS;
};
#endif /* FILTERMANAGER_H_*/
#pragma once
// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann
#ifndef FILTERMANAGER_H_
#define FILTERMANAGER_H_
#include "Manager.h"
#include "Sensor.h"

class FilterManager : public Manager {
public:
	FilterManager();
	virtual ~FilterManager();
	void ADDSENSOR(Sensor);

private:
	Sensor SENSORS[5/* find maximum length */];
	int SENSORAMMT;
	//Sensor _SENSORS;
};
#endif /* FILTERMANAGER_H_*/
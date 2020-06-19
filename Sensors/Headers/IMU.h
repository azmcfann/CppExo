#pragma once
// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#ifndef IMU_H_
#define IMU_H_
#include "Accel.h"
#include "Gyro.h"
#include "Mag.h"
#include "Temperature.h"
#include "Counter.h"
//Rshal?
#include <string>
using namespace std;

class IMU {
public:
	IMU(string, Accel, Gyro, Temperature, Counter);
	virtual ~IMU();
private:
	string NAME;
	Accel ACCEL;
	Gyro GYRO;
	Temperature TEMP;
	Counter COUNTER;

	double ORIENTATION[3];
	double ANGULARVELOCITY[3];
	double GYROANGLE[3];

};

#endif IMU_H_

#pragma once
/*
 * Accel.h
 *
 *  Created on: May 19, 2020
 *      Author: Owner
 */

#ifndef ACCEL_H_
#define ACCEL_H_
#include <string>
#include "Sensor.h"

class Accel : public Sensor {
public:
    Accel(string, int[], string);
    virtual ~Accel();

    double SUPOFFSET();
    double SUPORIENTATION();

    bool RESET();

    void SUPSETRAWVALS(int[]);

private:
    //int VALS[][][];
};

#endif /* ACCEL_H_ */
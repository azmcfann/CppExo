#pragma once
// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#ifndef ACCEL_H_
#define ACCEL_H_
#include <string>
#include "Sensor.h"

class Accel : public Sensor {
public:
    Accel(string, int[], string);
    Accel() = default;

    virtual ~Accel();

    bool RESET();

    void ACCELSETRAWVALS(int[]);

private:
    int VALUES[1];
};

#endif /* ACCEL_H_ */

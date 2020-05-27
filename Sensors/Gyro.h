#pragma once

#ifndef GYRO_H_
#define GYRO_H_
#include <string>
#include "Sensor.h"

class Gyro : public Sensor {
public:
    Gyro(string, int[], string);
    virtual ~Gyro();

    double SUPOFFSET();
    double SUPORIENTATION();
    
    bool RESET();

    void SUPSETRAWVALS(int[]);

private:
    //int VALS[][][];
};

#endif /* GYRO_H_ */
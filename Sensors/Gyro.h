#pragma once

#ifndef Gyro_H_
#define Gyro_H_
#include <string>
#include "Sensor.h"

class FSR : public Sensor {
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

#endif /* Gyro_H_ */
#pragma once

#ifndef FSR_H_
#define FSR_H_
#include <string>
#include "Sensor.h"

class FSR : public Sensor {
public:
    FSR(string, int[], string);
    virtual ~FSR();

    double SUPOFFSET();
    double SUPORIENTATION();

    bool RESET();

    void SUPSETRAWVALS(int[]);

private:
    //int VALS[][][];
};

#endif /* FSR_H_ */
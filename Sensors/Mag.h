#pragma once

#ifndef MAG_H_
#define MAG_H_
#include <string>
#include "Sensor.h"

class Mag : public Sensor {
public:
    Mag(string, int[], string);
    virtual ~Mag();

    double SUPOFFSET();
    double SUPORIENTATION();

    bool RESET();

    void SUPSETRAWVALS(int[]);

private:
    //int VALS[][][];
};

#endif /* MAG_H_ */
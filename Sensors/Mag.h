#pragma once

#ifndef MAG_H_
#define MAG_H_
#include <string>
#include "Sensor.h"

class Mag : public Sensor {
public:
    Mag(string, int[], string);
    Mag() = default;
    
    virtual ~Mag();
    bool RESET();

private:
    //int VALS[][][];
};

#endif /* MAG_H_ */
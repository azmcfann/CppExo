#pragma once
// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#ifndef FSR_H_
#define FSR_H_
#include <string>
#include "Sensor.h"

class FSR : public Sensor {
public:
    FSR(string, int[], string);
    FSR() = default;

    virtual ~FSR();

    bool RESET();

    void FSRSETRAWVALS(int[]);

private:
    int VALUES[1];
};

#endif /* FSR_H_ */
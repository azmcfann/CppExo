#pragma once
// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#ifndef GYRO_H_
#define GYRO_H_
#include <string>
#include "Sensor.h"

class Gyro : public Sensor {
public:
    Gyro(string, int[], string);
    Gyro() = default;
    
    virtual ~Gyro();

    bool RESET();
    
    void GYROSETRAWVALS(int[]);
private:
    int VALUES[1];
};

#endif /* GYRO_H_ */

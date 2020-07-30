// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann
#include "IMU.H"
#include <string>
using namespace std;

IMU::IMU(string name, Accel accel, Gyro gyro, Temperature temp, Counter count /* rshal? */) {
	this->NAME = name;
	this->ACCEL = accel;
	this->GYRO = gyro;
	this->TEMP = temp;
	this->COUNTER = count;

	//Kalman?
}

IMU::~IMU() {

}
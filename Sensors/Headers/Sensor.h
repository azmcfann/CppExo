#pragma once
// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#ifndef SENSOR_H_
#define SENSOR_H_
#include <string>
#include <fstream>
#include <queue>

using namespace std;

class Sensor {
public:
	//im making assumptions that the byte_list is a list of ints?
	//side is a descriptor of the location of the sensor

	Sensor(string, int[], string, int);
	Sensor() = default;
	
	virtual ~Sensor();

	string GETNAME();
	void SETNAME(string);

	string GETSIDE();
	void SETSIDE(string);

	string GETTYPE();
	void SETTYPE(string);

	double GETOFFSET();
	void SETOFFSET(double);

	double GETORIENTATION();
	void SETORIENTATION(double);

	int* GETRAWVALS();
	void SETRAWVALS(int[]);

	int* GETFILTEREDVALS();
	void SETFILTEREDVALS(int[]);

	int GETTIME();
	void SETTIME(int);

	bool GETFILTERED();
	void SETFILTERED(bool);

	int* GETVALUES();

	int* GETBYTELIST();
	void SETBYTELIST(int[]);

	int GETPACKET();
	void SETPACKET(int[]);

	int BINTODEC(int[]);
	int* DECTOBIN(int);

	//sticking things in private for security
	//until told otherwise
private:
	string _NAME;
	string ACCEL;
	string GYRO;
	string MAG;
	string POT;
	string FSR;
	string CLIFF;
	string _ORDER;
	string _SIDE;
	string _TYPE;

	//plural names i will assume until stated
	//that it is an array of values
	int _BYTE_LIST[8];
	int _RAW_VALUES[8];
	int _FILTERED_VALUES[8];

	queue <int> QUEUE;

	int _TIME;
	int _ERROR;
	int _PACKET;
	int _PACKET_ORDER;


	double _OFFSET;
	double _ORIENTATION;

	bool _FILTERED;
};



#endif /* SENSOR_H_ */

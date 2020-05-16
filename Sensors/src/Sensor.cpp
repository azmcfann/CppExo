/*
 * Sensor.cpp
 *
 *  Created on: May 16, 2020
 *      Author: Owner
 */

#include "Sensor.h"
#include <string>
#include <fstream>
using namespace std;

//im making assumptions that the byte_list is a list of ints?
//side is a descriptor of the location of the sensor

Sensor::Sensor(string name, int byte_list[], string side, int size) {
	//constructor
	//this.queue? TODO
	this->_NAME = name;
	this->_TYPE = NULL;
	this->_RAW_VALUES = NULL;
	this->_FILTRED_VALUES = 0;
	this->_TIME = 0;
	this->_OFFSET = 0.00;
	this->_ORIENTATION = NULL;
	this->_ERROR = 0;
	this->_FILTERED_VALUES = NULL;
	this->_FILTERED = false;
	this->_BYTE_LIST = byte_list;
	this->_PACKET = 0;
	this->_PACKET_ORDER = NULL;
	this->_ORDER = NULL;
	this->_SIDE = side;
}

Sensor::~Sensor() {
	// TODO Auto-generated destructor stub
}

string Sensor::GETNAME(){
	return this->_NAME;
}
void Sensor::SETNAME(string NEWNAME){
	this->_NAME = NEWNAME;
}

string Sensor::GETSIDE(){
	return this->_SIDE;
}
void Sensor::SETSIDE(string NEWSIDE){
	this->_SIDE = NEWSIDE;
}

string Sensor::GETTYPE(){
	return this->_TYPE;
}
void Sensor::SETTYPE(string NEWTYPE){
	this->_TYPE = NEWTYPE;
}

double Sensor::GETOFFSET(){
	return this->_OFFSET;
}
void Sensor::SETOFFSET(double NEWOFFSET){
	this->_OFFSET = NEWOFFSET;
}

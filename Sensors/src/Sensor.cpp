/*
 * Sensor.cpp
 *
 *  Created on: May 16, 2020
 *      Author: Owner
 */

#include "Sensor.h"
#include <string>
#include <fstream>
#include <queue>
using namespace std;

//im making assumptions that the byte_list is a list of ints?
//side is a descriptor of the location of the sensor

Sensor::Sensor(string name, int byte_list[], string side, int size) {
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

double Sensor::GETORIENTATION(){
	return this->_ORIENTATION;
}
void Sensor::SETORIENTATION(double NEWORIENT){
	this->_ORIENTATION = NEWORIENT;
}

int Sensor::GETRAWVALS(){
	return this->_RAW_VALUES;
}
void Sensor::SETRAWVALS(int NEWVALS[]){
	this->_RAW_VALUES = NEWVALS;
}

int Sensor::GETFILTEREDVALS(){
	return this->_FILTERED_VALUES;
}
void Sensor::SETFILTEREDVALS(int NEWVALS[]){
	this->_FILTERED_VALUES = NEWVALS;
}

int Sensor::GETTIME(){
	return this->_TIME;
}
void Sensor::SETTIME(int NEWTIME){
	this->_TIME = NEWTIME;
}

bool Sensor::GETFILTERED(){
	return this->_FILTERED;
}
void Sensor::SETFILTERED(bool NEWFILT){
	this->_FILTERED = NEWFILT;
}

int Sensor::GETVALUES(){
	//returns raw values if it has not been filtered
	// if it was filtered, return the filtered values
	if(GETFILTERED()){
		return this->_FILTERED_VALUES;
	}
	else{
		return this->_RAW_VALUES;
	}
}

int Sensor::GETBYTELIST(){
	return this->_BYTE_LIST;
}

int Sensor::GETPACKET(){
	return this->QUEUE.front();
}
void Sensor::SETPACKET(int NEWPACK){
	int CONVERT = this->BINTODEC(NEWPACK);
	this->_PACKET = CONVERT;
	this->SETRAWVALS(&CONVERT);
}


//TODO PARSE METHOD
//TODO  BINBIT METHOD
// are they the same function??

//converts a given binary to decimal
//https://www.geeksforgeeks.org/program-binary-decimal-conversion/
int Sensor::BINTODEC(int INPUT){
	int NUMBER = INPUT;
	int DECIMAL = 0;
	int BASE = 1;
	int TEMP = NUMBER;

	while(TEMP > 0){
		int LASTDIG = TEMP % 10;
		TEMP = TEMP /10;
		DECIMAL += (LASTDIG * BASE);
		BASE = BASE*2;
	}
	return DECIMAL;
}

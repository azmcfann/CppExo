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
	int empty[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	this->_NAME = name;
	this->_TYPE = "Default";
	this->SETRAWVALS(empty);
	//this->_FILTRED_VALUES = 0;
	this->_TIME = 0;
	this->_OFFSET = 0.00;
	this->_ORIENTATION = NULL;
	this->_ERROR = 0;
	this->SETFILTEREDVALS(empty);
	this->_FILTERED = false;
	this->SETBYTELIST(byte_list);
	this->_PACKET = 0;
	this->_PACKET_ORDER = NULL;
	this->_ORDER = "Default";
	this->_SIDE = side;
}

Sensor::~Sensor() {
	// TODO Auto-generated destructor stub
}

string Sensor::GETNAME() {
	return this->_NAME;
}
void Sensor::SETNAME(string NEWNAME) {
	this->_NAME = NEWNAME;
}

string Sensor::GETSIDE() {
	return this->_SIDE;
}
void Sensor::SETSIDE(string NEWSIDE) {
	this->_SIDE = NEWSIDE;
}

string Sensor::GETTYPE() {
	return this->_TYPE;
}
void Sensor::SETTYPE(string NEWTYPE) {
	this->_TYPE = NEWTYPE;
}

double Sensor::GETOFFSET() {
	return this->_OFFSET;
}
void Sensor::SETOFFSET(double NEWOFFSET) {
	this->_OFFSET = NEWOFFSET;
}

double Sensor::GETORIENTATION() {
	return this->_ORIENTATION;
}
void Sensor::SETORIENTATION(double NEWORIENT) {
	this->_ORIENTATION = NEWORIENT;
}

int* Sensor::GETRAWVALS() {
	return this->_RAW_VALUES;
}
void Sensor::SETRAWVALS(int NEWVALS[]) {
	if (sizeof(NEWVALS) == 1) {
		for (int z = 0; z < 8; z++) {
			this->_RAW_VALUES[z] = NULL;
		}
		this->_RAW_VALUES[0] = NEWVALS[0];
	}
	else {
		for (int x = 0; x < sizeof(NEWVALS); x++) {
			this->_RAW_VALUES[x] = NEWVALS[x];
		}
	}
}

int* Sensor::GETFILTEREDVALS() {
	return this->_FILTERED_VALUES;
}
void Sensor::SETFILTEREDVALS(int NEWVALS[]) {
	for (int x = 0; x < sizeof(NEWVALS); x++) {
		this->_FILTERED_VALUES[x] = NEWVALS[x];
	}

}

int Sensor::GETTIME() {
	return this->_TIME;
}
void Sensor::SETTIME(int NEWTIME) {
	this->_TIME = NEWTIME;
}

bool Sensor::GETFILTERED() {
	return this->_FILTERED;
}
void Sensor::SETFILTERED(bool NEWFILT) {
	this->_FILTERED = NEWFILT;
}

int* Sensor::GETVALUES() {
	//returns raw values if it has not been filtered
	// if it was filtered, return the filtered values
	if (GETFILTERED()) {
		return this->_FILTERED_VALUES;
	}
	else {
		return this->_RAW_VALUES;
	}
}

int* Sensor::GETBYTELIST() {
	return this->_BYTE_LIST;
}
void Sensor::SETBYTELIST(int NEWVALS[]) {
	for (int x = 0; x < sizeof(NEWVALS); x++) {
		this->_BYTE_LIST[x] = NEWVALS[x];
	}
}

int Sensor::GETPACKET() {
	return this->QUEUE.front();
}
void Sensor::SETPACKET(int NEWPACK[]) {
	int CONVERT = this->BINTODEC(NEWPACK);
	this->_PACKET = CONVERT;
	this->SETRAWVALS(&CONVERT);
}


//converts an int into an array of binary bits
int* Sensor::DECTOBIN(int DECIMAL) {
	int BINARY[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int INDEX = 7;
	while (INDEX >= 0) {
		BINARY[INDEX] = DECIMAL % 2;
		if ((DECIMAL % 2) > 0) {
			DECIMAL = DECIMAL - 1;
		}
		else {}
		DECIMAL = DECIMAL / 2;
		INDEX--;
	}
	return BINARY;
}

//converts an array of binary bits to an int
int Sensor::BINTODEC(int INPUT[]) {
	int NUMBER = 0;
	int INDEX = 0;
	while (INDEX < sizeof(INPUT)) {
		NUMBER = NUMBER * 2;
		NUMBER = NUMBER + INPUT[INDEX];
		INDEX++;
	}
	return NUMBER;
}
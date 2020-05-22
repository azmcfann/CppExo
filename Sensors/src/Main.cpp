//Main class, used to compile and test code
//will be removed when it comes time
//to finish the code

#include <iostream>
using namespace std;
#include "Sensor.h"
#include "Accel.h"
#include "Counter.h"
#include "Temperature.h"

int main() {
	Sensor TESTSENSOR = new Sensor("Test", [1, 0, 0, 1, 1, 1, 0, 0], "Left", 2);
	//156 = 10011100

	Temperature TESTTEMP = new Temperature("Temp Test", [1, 1, 0, 1, 0, 0, 1, 0], "Right");
	//210 = 11010010

	Counter TESTCOUNTER = new Counter("Test Counter", [1, 1, 1, 1, 1, 1, 1, 1], "Top");
	//255 = 11111111

	Accel TESTACCEL = new Accel("Test Accel", [0, 0, 0, 0, 0, 0, 0, 1], "Bottom");
	//1 = 00000001

	std::cout << "RUNNING TESTS ON SENSOR SUPERCLASS. \n";
	std::cout << "\n";
	if (TESTSENSOR.GETNAME() == "Test") {
		std::cout << "GETNAME in SENSOR passed. \n";
	}
	else {
		std::cout << "GOD DAMMIT, GETNAME IN SENSOR FAILED. \n";
	}
	TESTSENSOR.SETNAME("Namechange");
	if (TESTSENSOR.GETNAME() == "Namechange") {
		std::cout << "SETNAME in SENSOR passed. \n";
	}
	else {
		std::cout << "GOD DAMMIT, SETNAME IN SENSOR FAILED \n";
	}
	if (TESTSENSOR.GETSIDE() == "Left") {
		std::cout << "GETSIDE in SENSOR passed. \n";
	}
	else {
		std::cout << "GOD DAMMIT, GETSIDE IN SENSOR FAILED. \n";
	}
	TESTSENSOR.SETSIDE("Right");
	if (TESTSENSOR.GETSIDE() == "Right") {
		std::cout << "SETSIDE in SENSOR passed. \n";
	}
	else {
		std::cout << "GOD DAMMIT, SETSIDE IN SENSOR FAILED. \n"
	}
}
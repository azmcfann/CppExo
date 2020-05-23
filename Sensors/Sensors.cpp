// Sensors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#include <iostream>
using namespace std;
#include "Sensor.h"
#include "Accel.h"
#include "Counter.h"
#include "Temperature.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

	int onefivesix[8] = { 1, 0, 0, 1, 1, 1, 0, };
	Sensor TESTSENSOR("Test", onefivesix, "Left", 2);
	//156 = 10011100

	int twoonezero[8] = { 1, 1, 0, 1, 0, 0, 1, 0 };
	Temperature TESTTEMP("Temp Test", twoonezero, "Right");
	//210 = 11010010

	int twooneone[8] = { 1, 1, 1, 1, 1, 1, 1, 1 };
	Counter TESTCOUNTER("Test Counter", twooneone, "Top");
	//255 = 11111111

	int zerozeroone[8] = { 0, 0, 0, 0, 0, 0, 0, 1 };
	Accel TESTACCEL("Test Accel", zerozeroone, "Bottom");
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
		std::cout << "GOD DAMMIT, SETSIDE IN SENSOR FAILED. \n";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

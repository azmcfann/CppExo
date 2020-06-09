// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann
#include "Manager.h"
#include <string>
using namespace std;

//TODO figure out a way to call manager
//   functions from publisher and subscriber
//   without creating an infinite include loop

Manager::Manager() {
	//PUBLISHER = Publisher::Publisher("Help");
}

Manager::~Manager() {

}
/*
Publisher Manager::GETPUBLISHER() {
	return PUBLISHER;
}
*/
void Manager::REGISTERSUB() {
	//TODO learn more about the publisher and subscriber classes
	//  and construct their folder
}

///TODO after making subscriber and publisher classes
///  that this relies on
/*
Subscriber Manager::GENERATESUB(){
	return newsubscriber
}
*/

bool Manager::UPDATE() {
	return true;
}
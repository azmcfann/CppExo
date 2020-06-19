// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann
#include "CommunicationManager.h"
#include <string>
#include <queue>
#include <thread>
#include <time.h>
#include "windows.h"
using namespace std;

CommunicationManager::CommunicationManager() : Manager() {
	//this->THREAD = thread::thread();
	CONNECTED = false;
	//this->_INCOMING_MESSAGES = queue<int>;
	//this.SERVER = NULL;


}
CommunicationManager::~CommunicationManager() {

}

bool CommunicationManager::SETUP() {
	return true;
}

void CommunicationManager::START() {

}

void CommunicationManager::STOP() {

}

void CommunicationManager::CONNECT() {

}

void CommunicationManager::DISCONNECT() {

}

bool CommunicationManager::HAVEDATA() {
	if (this->_INCOMING_MESSAGES.empty()) {
		return false;
	}
	else {
		return true;
	}
}

bool CommunicationManager::READPORT() {
	return true;
}

queue<int> CommunicationManager::GETDATA() {
	return this->_INCOMING_MESSAGES;
}

void CommunicationManager::READ() {
	while (this->CONNECTED) {
		//Correct?
		Sleep(39 * 10 * 6);
		//TODO
		//get information on what the queue types are
		
	}
}

bool CommunicationManager::SEND(string MESSAGE) {
	return true;
}

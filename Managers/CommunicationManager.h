#pragma once
// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#ifndef COMMUNICATIONMANAGER_H_
#define COMMUNICATIONMANAGER_H_

#include "Manager.h"
#include <thread>
#include <string>
#include <queue>
using namespace std;
class CommunicationManager: public Manager {
public:
	CommunicationManager();
	virtual ~CommunicationManager();

	bool SETUP();
	bool HAVEDATA();
	bool READPORT();
	bool SEND(string);
	
	//TODO
	/*
	GETSERVER
	SETSERVER

	*/

	void START();
	void STOP();
	void CONNECT();
	void DISCONNECT();
	void READ();

	queue<int> GETDATA();

private:
	//TODO
	/*
	server?
	*/
	bool CONNECTED;
	thread THREAD;
	queue<int> _INCOMING_MESSAGES;
	queue<int> _OUTGOING_MESSAGES;

};

#endif /* COMMUNICATIONMANAGER_H_ */
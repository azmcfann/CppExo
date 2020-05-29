#pragma once

#ifndef MANAGER_H_
#define MANAGER_H_
#include "Publisher.h"
class Manager {
public:
	Manager();
	virtual ~Manager();

	void REGISTERSUB();

	bool UPDATE();

	Publisher GETPUBLISHER();

	//Subscriber GENERATESUB();

private:
	Publisher PUBLISHER;

};

#endif /* MANAGER_H_ */
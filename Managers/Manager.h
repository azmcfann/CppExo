#pragma once
// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann

#ifndef MANAGER_H_
#define MANAGER_H_

class Manager {
public:
	Manager();
	virtual ~Manager();

	void REGISTERSUB();

	bool UPDATE();

	//Publisher GETPUBLISHER();

	//Subscriber GENERATESUB();

private:
	//Publisher PUBLISHER;

};

#endif /* MANAGER_H_ */
#pragma once

#ifndef MANAGER_H_
#define MANAGER_H_

class Manager {
public:
	Manager();
	virtual ~Manager();

	void REGISTERSUB();

	bool UPDATE();

	//Subscriber GENERATESUB();

private:
	//TODO construct the publisher
	//  and subscriber classes and
	//  their folder

};

#endif /* MANAGER_H_ */
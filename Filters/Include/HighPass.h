#pragma once
#ifndef HIGHPASS_H_
#define HIGHPASS_H_

#include "BaseFilter.h"

class HighPass : public BaseFilter {
public:
	HighPass(/*alpha?*/);
	virtual ~HighPass();

	
private:
	int _X;
	int _Y;

};

#endif /*HIGHPASS_H_*/
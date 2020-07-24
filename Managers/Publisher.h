#pragma once
// Authors:
//      Original python code created by
//      Nathaniel Goldfarb
//      
//      C++ code adapted from the python code by
//      Alexandra McFann
#ifndef PUBLISHER_H_
#define PUBLISHER_H_
#include <string>
using namespace std;

class Publisher {

public:
	Publisher(string);
	virtual ~Publisher();

	Publisher() = default;

private:
	string NAME;
};

#endif /*PUBLISHER_H_*/
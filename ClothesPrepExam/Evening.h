#pragma once
#ifndef EVENING_H
#define EVENING_H
#include <iostream>
using namespace std;

class Evening 
{
protected:
	string type;
	bool stock;// допис функц

public:
	Evening(string type);
	virtual void display();
};
#endif 

#pragma once
#ifndef SPORT_H
#define SPORT_H
#include <iostream>
using namespace std;

class Sport 
{
protected:
	string type;
	string technology;

public:
	Sport(string type, string technology);
	virtual void display();
};
#endif 

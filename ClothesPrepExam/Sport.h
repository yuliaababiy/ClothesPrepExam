#pragma once
#ifndef SPORT_H
#define SPORT_H
#include <iostream>
using namespace std;

class Evening : Clothes
{
protected:
	string type;
	string technology;

public:
	Evening(string name, string material, double price, string type, string technology);
	void display() override;
};
#endif 

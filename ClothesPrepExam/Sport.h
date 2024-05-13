#pragma once
#ifndef SPORT_H
#define SPORT_H
#include <iostream>
#include "Clothes.h"
using namespace std;

class Sport : public Clothes
{
protected:
	string type;
	string technology;

public:
	Sport(string name, string material, double price, string type, string technology);
	void display() override;
	void save(ostream& out) override;
};
#endif 

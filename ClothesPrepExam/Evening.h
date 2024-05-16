#pragma once
#ifndef EVENING_H
#define EVENING_H
#include "Clothes.h"
#include <string>
using namespace std;

class Evening: public Clothes
{
protected:
	string type;
	bool stock;

public:
	Evening(string name, string material,double price, string type, bool stock);
	void display() override;
	void save(ostream& out) override;
	void saveWithSpaces(ostream& out) override;
};
#endif 



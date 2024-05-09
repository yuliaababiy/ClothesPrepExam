#pragma once
#ifndef CLOTHES.H
#define CLOTHES.H
#include "Evening.h"
#include "Sport.h"

class Clothes : public Evening, Sport
{
private:
	double price;
	string name;
	string material;

public:
	Clothes(string name, string material, double price);
    void display() override;
};
#endif //CLOTHES.H

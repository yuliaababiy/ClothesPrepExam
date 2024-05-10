#pragma once
#ifndef CLOTHES.H
#define CLOTHES.H
#include "Evening.h"
#include "Sport.h"

class Clothes 
{
private:
	double price;
	string name;
	string material;

public:
	Clothes(string name, string material, double price);
   virtual void display();
};
#endif //CLOTHES.H

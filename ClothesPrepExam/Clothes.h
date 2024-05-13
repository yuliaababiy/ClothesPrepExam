#pragma once
#ifndef CLOTHES_H
#define CLOTHES_H
#include <iostream>
using namespace std;

class Clothes
{
protected:
	double price;
	string name;
	string material;

public:
	Clothes(string name, string material, double price);
	virtual void display();
	virtual void save(ostream& out);
};
#endif //CLOTHES.H

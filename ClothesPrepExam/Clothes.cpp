#include "Clothes.h"
#include <iostream>

Clothes::Clothes(string name, string material, double price) :name(name), price(price), material(material) {};
void Clothes::display()
{
	cout << "Clothes: "  << price << " $ " << name << " name: " << material << " material: " <<endl;
}

void Clothes::save(ostream& out)
{
	cout << "Clothes: " << price << " $ " << name << " name: " << material << " material: " << endl;
}


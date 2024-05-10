#include "Clothes.h"
#include <iostream>

Clothes::Clothes(double price, string name, string material) :name(name), price(price), material(material) {};
void Clothes::display()
{
	cout << "Clothes: "  << price << " $ " << name << " name: " << material << " material: " <<endl;
}

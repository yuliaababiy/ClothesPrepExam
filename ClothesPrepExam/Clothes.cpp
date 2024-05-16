#include "Clothes.h"
#include <iostream>

Clothes::Clothes(string name, string material, double price) :name(name), price(price), material(material) {};
void Clothes::display()
{
	cout << "Name: " << name << endl;
	cout << "Material: " << material << endl;
	cout << "Price: " << price << endl;
	cout << endl;
}

void Clothes::save(ostream& out)
{
	out << "Price: " << price << " $ " << endl;
	out << "Name: " << name << endl;
	out << "Material: " << material << endl;
	out << endl;
}

void  Clothes::saveWithSpaces(ostream& out)
{
	out << "Clothes " << name << " " << material << " " << price << " " << endl;
}

double Clothes::getPrice()
{
	return price;
}

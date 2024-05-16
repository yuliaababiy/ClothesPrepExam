#include "Clothes.h"
#include <iostream>

Clothes::Clothes(string name, string material, double price) :name(name), price(price), material(material) {};
void Clothes::display()
{
  cout << "Clothes: "  << price << " $ " << name << " name: " << material << " material: " << endl;
}

void Clothes::save(ostream& out)
{
    out << "Price: " << price << " $ " << endl;
    out << "Name: " << name << endl;
    out << "Material: " << material << endl;
}

void  Clothes ::saveWithSpaces(ostream& out)
{
    out << "Clothes " << price << " " << name << " " << material << " " << endl;
}

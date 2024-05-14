#include "Sport.h"

Sport::Sport(string name, string material, double price, string type, string technology)
    : Clothes(name, material, price), type(type), technology(technology) {}

void Sport::display()
{
    cout << "Type: " << type << endl;
    cout << "Technology: " << technology << endl;
}
void Sport::save(ostream& out)
{
    out << "Name: " << name << endl;
    out << "Material: " << material << endl;
    out << "Price: " << price << endl;
    out << "Type: " << type << endl;
    out << "Technology: " << technology << endl;
}

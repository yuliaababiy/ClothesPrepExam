#include "Sport.h"

Sport::Sport(string name, string material, double price, string type, string technology)
    : Clothes(name, material, price), type(type), technology(technology) {}

void Sport::display()
{
    cout << "Name: " << name << endl;
    cout << "Material: " << material << endl;
    cout << "Price: " << price << endl;
    cout << "Type: " << type << endl;
    cout << "Technology: " << technology << endl;
    cout << endl;
}
void Sport::save(ostream& out)
{
    out << "Name: " << name << endl;
    out << "Material: " << material << endl;
    out << "Price: " << price << endl;
    out << "Type: " << type << endl;
    out << "Technology: " << technology << endl;
    out << endl;
}
void Sport::saveWithSpaces(ostream& out)
{
    out << "Sport " << name << " " << material << " " << price << " " << type << " " << technology << " " << endl;
}


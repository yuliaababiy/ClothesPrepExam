#include "Sport.h"

Sport::Sport(string name, string material, double price, string type, string technology)
    : Clothes(name, material, price), type(type), technology(technology) {}

void Evening::display()
{
    cout << "Name: " << name << endl;
    cout << "Material: " << material << endl;
    cout << "Price: " << price << endl;
    cout << "Type: " << type << endl;
    cout << "Technology: " << technology << endl;
}

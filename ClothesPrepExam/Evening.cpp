#include "Evening.h"

Evening::Evening(string name, string material, double price, string type, bool stock)
    : Clothes(name, material, price), type(type), stock(stock) {}

void Evening::display()
{
    cout << "Name: " << name << endl;
    cout << "Material: " << material << endl;
    cout << "Price: " << price << endl;
    cout << "Type: " << type << endl;
    cout << "In Stock: " << stock << endl;
    cout << endl;
}
void Evening::save(ostream& out) 
    {
        out << "Name: " << name << endl;
        out << "Material: " << material << endl;
        out << "Price: " << price << endl;
        out << "Type: " << type << endl;
        out << "In Stock: " << stock << endl;
        out << endl;

    }
void Evening ::saveWithSpaces(ostream& out)
{
    out << "Evening " << name << " " << material << " " <<price << " " << type << " " << stock << " " << endl;
}

#include "Evening.h"

Evening::Evening(string name, string material, double price, string type, bool stock)
    : Clothes(name, material, price), type(type), stock(stock) {}

void Evening::display()
{
    cout << "Type: " << type << endl;
    cout << "In Stock: " << stock << endl;
}
void Evening::save(ostream& out) 
    {
        out << "Type: " << type << endl;
        out << "In Stock: " << stock << endl;
    }

#include "Evening.h"

Evening::Evening(string name, string material, double price, string type, bool stock)
    : Clothes(name, material, price), type(type), stock(stock) {}

void Evening::display()
{
    cout << "Name: " << name << endl;
    cout << "Material: " << material << endl;
    cout << "Price: " << price << endl;
    cout << "Type: " << type << endl;
    cout << "In Stock: " << stock << std::endl;
}

bool Evening::hasDecor() const
{
    if (type == "Fancy" || type == "Elegant")
     {
        return true;
     }
    else
     {
         return false;
    }
    return stock;
}

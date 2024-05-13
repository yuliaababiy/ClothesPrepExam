#include "Clothes.h"
#include "Evening.h"
#include "Sport.h"
#include <vector>
#include <fstream>

void saveToFile(vector <Clothes*>& clothes, string filename)
{
	ofstream file(filename);
	for (auto c : clothes)
	{
		c->save(file);
	}
}

void loadFromFile(vector <Clothes*>& clothes, string filename)
{
	ifstream file(filename);
	string type, name, material, technology;
	int price;
	bool stock;

	while (file >> type >> name >> material >> price)
	{
		if (type == "Sport")
		{
			file >> technology;
			clothes.push_back(new Sport(name, material, price, type, technology));
		}
		else if (type == "Evening")
		{
			file >> stock;
			clothes.push_back(new Evening(name, material, price,type, stock));
		}
		else if (type == "Clothes")
		{
			clothes.push_back(new Clothes(name, material,price));
		}
	}
}

int main()
{
	vector <Clothes*> clothes;
	loadFromFile(clothes, "input.txt");
	saveToFile(clothes, "output.txt");
}

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

void displayClothes(vector <Clothes*>& clothes)
{
	for (auto* clothes : clothes) {
		clothes->display();
	}
}

void loadFromFile(vector <Clothes*>& clothes, string filename)
{
	ifstream file(filename);
	string type, name, material, technology, eveningType, sportType;
	int price;
	bool stock;

	while (file >> type >> name >> material >> price)
	{
		if (type == "Sport")
		{
			file >> sportType >> technology;
			clothes.push_back(new Sport(name, material, price, sportType, technology));
		}
		else if (type == "Evening")
		{
			file >> eveningType >> stock;
			clothes.push_back(new Evening(name, material, price, eveningType, stock));
		}
		else if (type == "Clothes")
		{
			clothes.push_back(new Clothes(name, material, price));
		}
	}
}

int main()
{
	vector <Clothes*> clothes;
	ofstream file("input.txt", ios::app);
	int choice;
	while (true)
	{
		cout << "Enter action u wanna to do:" << endl;
		cout << "1 - load from file and print" << endl;
		cout << "2 - add object to file" << endl;
		cout << "3 - print objects into file" << endl;;
		cout << "4 - find the most expensive" << endl;;
		cout << "5 - exit" << endl;
		cin >> choice;
		if (choice == 1)
		{
			loadFromFile(clothes, "input.txt");
			displayClothes(clothes);
		}
		else if (choice == 2)
		{
			string type, name, material, technology, eveningType, sportType;
			double price;
			bool stock;
			cout << "Enter type: " << endl;
			cin >> type;
			if (type == "Clothes")
			{
				cout << "Enter name: " << endl;
				cin >> name;
				cout << "Enter material: " << endl;
				cin >> material;
				cout << "Enter price: " << endl;
				cin >> price;
				Clothes* c = new Clothes(name, material, price);
				c->saveWithSpaces(file);
			}
			else if (type == "Evening")
			{
				cout << "Enter name: " << endl;
				cin >> name;
				cout << "Enter material: " << endl;
				cin >> material;
				cout << "Enter price: " << endl;
				cin >> price;
				cout << "Enter type: " << endl;
				cin >> type;
				cout << "Enter stock: " << endl;
				cin >> stock;
				Evening* e = new Evening(name, material, price, type, stock);
				e->saveWithSpaces(file);
			}
			else if (type == "Sport")
			{
				cout << "Enter name: " << endl;
				cin >> name;
				cout << "Enter material: " << endl;
				cin >> material;
				cout << "Enter price: " << endl;
				cin >> price;
				cout << "Enter type: " << endl;
				cin >> type;
				cout << "Enter technology: " << endl;
				cin >> technology;
				Sport* p = new Sport(name, material, price, type, technology);
				p->saveWithSpaces(file);
			}
			else
			{
				cout << "You entered wrong clothes type!" << endl;
				break;
			}
		}
		else if (choice == 3)
		{
			loadFromFile(clothes, "input.txt");
			saveToFile(clothes, "output.txt");
		}
		else if (choice == 4)
		{
			loadFromFile(clothes, "input.txt");
			int theMostExpensive = 0;
			for (auto c : clothes)
			{
				if (c->getPrice() > theMostExpensive)
				{
					theMostExpensive = c->getPrice();
				}
			}
			cout << "The most expensive is: " << theMostExpensive << endl;
		}
		else if (choice == 5)
		{
			break;
		}
		else
		{
			cout << "You entered wrong action!" << endl;
		}
	}
	return 0;
}
	
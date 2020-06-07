#include "Storage.h"
#include <vector>
#include <iostream>
using namespace std;


void Storage::clean()
{
	vector<Store> nonExpiredStores;

}

Storage::Storage()
{
	used = 0;
	capacity = 0;
	StorePtr = new Store * [capacity];
}

Storage::Storage(const Storage& other)
{
	copy(other);
}

Storage& Storage::operator=(const Storage& other)
{
	if (this != &other)
	{
		clear();
		copy(other);
	}
	return *this;
}

Storage::~Storage()
{
	clear();
}

void Storage::copy(const Storage& other)
{
	used = other.used;
	capacity = other.capacity;
	this->StorePtr = new Store*[capacity];
	this->StorePtr = other.StorePtr;
}

void Storage::clear()
{
	for (int i = 0; i < capacity; i++) 
	{
		delete StorePtr[i];
	}
	delete[] StorePtr;
}


void Storage::printall() const
{
	for (int i = 0; i < used; i++)
		StorePtr[i]->printStore();
}

Store Storage::getStore(int index) const
{
	return *StorePtr[index];
}

void Storage::printStoreName() const
{
	for (int i = 0; i < used; i++)
		cout << i + 1 << ". " << StorePtr[i]->getName() << endl;
}

void Storage::saveToFile(ofstream& out)
{
	if (used == 0)
		cerr << "There is nothing to save" << endl;
	else
	{
		for (int i = 0; i < used; i++)
			StorePtr[i]->printStoreToFile(out);

		out << endl; 
	}
}

void Storage::addStore(const Store& store)
{
	stores.push_back(store);
}


	








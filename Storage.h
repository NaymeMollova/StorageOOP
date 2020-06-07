#pragma once
#include <vector>
#include "Store.h"
using namespace std;

class Storage
{
private:
	Store** StorePtr;
	int used;
	int capacity;
	void copy(const Storage& other);
	void clear();
	vector<Store> stores;
public:
	
	void printall() const;
	Store getStore(int index) const;
	void printStoreName() const;
	void saveToFile(ofstream& out);
	void addStore(const Store&);
	const vector<Store>& getStores() const
	{
		return stores;
	}
	void remove(const Store&);
	void remove(const string& name, float amount);
	void clean();
	Storage(); 
	Storage(const Storage& other);
	Storage& operator=(const Storage& other);
	~Storage();
};
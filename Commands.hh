#pragma once

#include <string>
#include <vector>
#include "Storage.h"
#include "Store.h"

using namespace std;

class ICommand
{
private:
	string name;

public:
	virtual void help() = 0;
	virtual void execute(Storage&) = 0;
	const string& getName()
	{
		return name;
	}

     ICommand(const string& name);
	 virtual ~ICommand();
};


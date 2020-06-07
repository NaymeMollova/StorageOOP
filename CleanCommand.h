#pragma once
#include "Commands.hh"
#include "Storage.h"

using namespace std;

class CleanCommand : ICommand
{
public:
	void execute(Storage&);
	string getName();
};


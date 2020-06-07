#pragma once
#include "RemoveCommand.h"
#include "Commands.hh"
using namespace std;

class RemoveCommand : public ICommand
{
public:

	void execute(vector<string> arg);
	string getName();
};


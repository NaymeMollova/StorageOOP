#pragma once
#include "Commands.hh"

using namespace std;

class Exit: public ICommand
{
public:
	Exit() : ICommand("exit")
	{

	}

	void help(ostream&);
	void execute(Storage&);
};


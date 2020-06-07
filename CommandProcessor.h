#pragma once
#include "Storage.h"
#include <vector>
#include "Commands.hh"

using namespace std;
class CommandProcessor : public ICommand
{

private:

	vector<ICommand*> commands;

public:
	CommandProcessor();
	~CommandProcessor();
	void execute(const string&, Storage&);
	void registerCommand(ICommand* command);
	void help();
	const vector<ICommand*> getCommands()
	{
		return commands;
	}
};


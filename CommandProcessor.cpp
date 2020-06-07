#include "CommandProcessor.h"


CommandProcessor::~CommandProcessor()
{
	for (unsigned i = 0; i < this->commands.size(); i++)
	{
		delete this->commands[i];
	}
}

void CommandProcessor::execute(const string& command_name, Storage& storage)
{
	for (unsigned i = 0; i < this->commands.size(); i++)
	{
		if (this->commands[i]->getName().compare(command_name))
		{
			this->commands[i]->execute(storage);
			return;
		}
	}
}

void CommandProcessor::registerCommand(ICommand* command)
{
	this->commands.push_back(command);
}

void CommandProcessor::help()
{
}

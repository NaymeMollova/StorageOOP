#include "LogCommand.h"
#include <iostream>

LogCommand::LogCommand()
	:ICommand("log")
{
}

void LogCommand::execute(Storage& storage)
{
	
}

void LogCommand::help()
{
	cout << "Logs stores added between 2 dates" << endl;
}

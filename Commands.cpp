#include "Commands.hh"
#include <iostream>


using namespace std;



ICommand::ICommand(const string& name)
	:name(name)
{
	
}

ICommand::~ICommand()
{
}

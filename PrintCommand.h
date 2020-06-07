#pragma once
#include "Commands.hh"


using namespace std;
class PrintCommand : public ICommand
{
	public:
		void execute(Storage& );
		void help();
		string getName();
	

};


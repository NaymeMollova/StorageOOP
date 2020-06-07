#pragma once
#include "Commands.hh"

using namespace std;
class LogCommand : public ICommand
{
public:
	LogCommand();
		~LogCommand() = default;


		void execute(Storage&) ;
		void help();

};


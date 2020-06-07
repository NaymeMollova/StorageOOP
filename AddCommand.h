#pragma once
#include "Commands.hh"

#include "Storage.h"
using namespace std;


class AddCommand : public ICommand
{
public:
	AddCommand();
	~AddCommand();
	void execute(Storage&) ;
	void help() ;
};


#include "Exit.h"
#include <fstream>

using namespace std;

void Exit::help(ostream& out)
{
	out << "exit" << "Exiting the program" << endl;
}

void Exit::execute(Storage& storage)
{
}

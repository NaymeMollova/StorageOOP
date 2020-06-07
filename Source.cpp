#include <iostream>
#include "Store.h"
#include <fstream>
#include <cstring>
#include "Storage.h"
#include "Commands.hh"
#include "AddCommand.h"
#include "LogCommand.h"
#include "CommandProcessor.h"
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	
	
	fstream store;
	
	store.open("store.txt", ios::in);
	size_t size = 0;

	store >> size;

	int n = 0;
	int* arr = new int[size];
	
	while (!store.eof())
	{
		
		if (n < size)
			store >> arr[n++];
	
		else
			break;
		
	}
		

	for (size_t i = 0; i < n; i++)
	{
		
		cout << arr[i] << ' ';
	}
	delete[] arr;
	


	
	string input;
	
	Storage storage;

	//processor.registerCommand(new AddCommand());
	//processor.registerCommand(new LogCommand());

	do
	{
		cout << ">";
		cin >> input;
		//processor.execute(input, storage);
	} while (input != "exit");

	
		return 0;
}


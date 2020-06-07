#include "AddCommand.h"

AddCommand::AddCommand()
	:ICommand("add")
{
}

AddCommand::~AddCommand()
{

}

void AddCommand::execute(Storage& storage)
{
	string m_name;
	Date m_expiration_date;
	Date m_entry_date;
	string m_maker;
	unsigned int m_unit;
	unsigned int m_location_section;
	string m_comment;
	Amount StoreAmount;

	cout << "Enter name of store: ";
	cin >> m_name;
	cout << endl;
	cout << "Enter expiration date of store: ";
	cin >> m_expiration_date;
	cout << endl;
	cout << "Enter entry date of store: ";
	cin >> m_entry_date;
	cout << endl;
	cout << "Enter the maker of store: ";
	cin >> m_maker;
	cout << endl;
	cout << "Enter unit of store: ";
	cin >> m_unit;
	cout << endl;
	cout << "Enter the location of store: ";
	cin >> m_location_section;
	cout << endl;
	cout << "Enter comment for store: ";
	cin >> m_comment;
	cout << endl;

	Store store_(m_name, m_expiration_date, m_entry_date, m_maker, m_unit, m_location_section, m_comment);
	storage.addStore(store_);
}

void AddCommand::help()
{
	cout << "Command used to add stuff" << endl;
}

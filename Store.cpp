
#include <fstream>
#include <iostream>
#include "Store.h"

using namespace std;

Store::~Store()
{
	clear();
}


void Store::copy(const Store& other)
{
	m_name = other.m_name;
	m_expiration_date = other.m_expiration_date;
	m_entry_date = other.m_entry_date;
	m_maker = other.m_maker;
	m_unit = other.m_unit;
	this->StoreAmount = other.StoreAmount;
	m_location_section = other.m_location_section;
	m_comment = other.m_comment;
	


}

void Store::clear()
{
}



Store::Store(string name, Date expiration_date, Date entry_date, string maker, unsigned unit, unsigned location_section,
	string comment, Amount storeAmount)
	:m_name(name) 
	, m_expiration_date(expiration_date)
	, m_entry_date(entry_date)
	, m_maker(maker)
	, m_unit(unit)
	, m_location_section(location_section)
	, m_comment(comment)
	
{
	
}

Store::Store(const Store& other)
{
	copy(other);
}
Store& Store::operator=(const Store& other)
{
	if (this != &other)
	{
		clear();
		copy(other);
	}
	return *this;
}


void Store::setStore(string newName, Date newExpiration_date, Date newEntry_date, string newMaker,
	 unsigned newUnit, unsigned newLocation_section, string newComment)
{
	 m_name = newName;
	 Date expiration_date = newExpiration_date;
	 Date entry_date = newEntry_date;
	 m_maker = newMaker;
	 StoreAmount = Amount::kg;
	 unsigned unit = newUnit;
	 unsigned location_section = newLocation_section;
	  m_comment = newComment;
}


	




void Store::setName(string newName)
{
	m_name = newName;
}


void Store::setExpirationDate(Date newExpiration_date)
{
	 m_expiration_date = newExpiration_date;

}


void Store::setEntryDate(Date newEntry_date)
{
	  m_entry_date = newEntry_date;
}

void Store::setMaker(string newMaker)
{
	m_maker = newMaker;
}

void Store::setAmount(Amount newAmount)
{
	Amount amount = newAmount;
}

void Store::setUnit(unsigned newUnit)
{
	 m_unit = newUnit;
}

void Store::setLocationSection(unsigned newLocation_section)
{
	 m_location_section = newLocation_section;
}

void Store::setComment(string newComment)
{
	m_comment = newComment;
}

void Store::printStore()
{
	cout << "Name: " << m_name << endl;
	cout << "Expiration: " <<  m_expiration_date << endl;
	cout << "Entry: "<< m_entry_date << endl;
	cout << "Maker: " << m_maker << endl;
	cout << "Amount: ";
	switch (amnt)
	{
	case Amount::kg:
		cout << "kg" << endl;
		break;
	case Amount::l:
		cout << "l" << endl;
		break;
	default:
		cout << "Unknown" << endl;
		break;
	}
	cout << "Unit: " << m_unit << endl;
	cout << "Location section: " << m_location_section << endl;
    cout << "Comments: " << m_comment << endl;
}

void Store::printStoreToFile(std::ofstream& out)
{
	out << m_name << " " << m_maker << " " << std::endl;
	out << m_expiration_date << std::endl;
	out << m_entry_date << std::endl;
	out << m_unit << " " << std::endl;
	out << m_location_section << " " << std::endl;
	out << m_comment << " " << std::endl;
}



ostream& operator<<(ostream& st, const Store& object)
{
	st << object.getName() << endl;
	st << object.getExpirationDate() << endl;
	st << object.getEntryDate() << endl;
	st << object.getMaker() << endl;
	st << object.getUnit() << endl;
	st << object.getLocationSection() << endl;
	st << object.getComment() << endl;
	return st;
}

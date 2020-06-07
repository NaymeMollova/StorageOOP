#include "Date.h"
#include <iostream>
#include <fstream>
using namespace std;


Date::Date(int year, int month, int date)
{
	m_year = year;
	m_month = month;
	m_date = date;

}


void Date::setYear(int year)
{
	m_year = year;
}

void Date::setMonth(int month)
{
	if (m_month < 1 && m_month >12)
	{
		cout << "The Month is invalid" << endl;
	}
	else
		m_month = month;
}

void Date::setDate(int date)
{
	if (m_date < 1 && m_date > 31)
	{
		cout << "The date is invalid" << endl;

	}
	else
		m_date = date;
}

void Date::showDate()
{
	cout << m_year << ". " << m_month << "." << m_date << endl;
}

void Date::printDate()
{
	cout << "Year: " << m_year << ". " << m_month << ". " << m_date;
}

bool Date::operator>(const Date& other)
{
	if (m_year == other.m_year)
	{
		if (m_month == other.m_month)
		{
			if (m_date == other.m_date)
			{
				return false;
			}
			else
			{
				return m_date > other.m_date;
			}
		}
		else
		{
			return m_month > other.m_month;
		}
		
	}
	return m_year > other.m_year;
	
}

bool Date::operator<(const Date& other)
{
	return !(*this > other);
}

bool Date::operator==(const Date& other)
{
	return m_year == other.m_year && m_month == other.m_month && m_date == other.m_date;
}



ostream& operator<<(ostream& out, const Date& object)
{
	out << object.getYear() << object.getMonth() << object.getDate();
	 return out;
}

istream& operator>>(istream& st,  Date& obj)
{
	st >> obj.m_year;
	st >> obj.m_month;
	st >> obj.m_date;
	return st;
}

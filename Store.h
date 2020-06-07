#include <iostream>
#include <fstream>
#include <string>
#include "Date.h"
#include<stdlib.h>
#include <vector>



using namespace std;

#pragma warning(disable:4996)
#pragma once

	enum class Amount { kg, l };
	class Store
	{
		
	private:
	    string m_name;
		Date m_expiration_date;
		Date m_entry_date;
		string m_maker;
		unsigned int m_unit;
		unsigned int m_location_section;
		string m_comment;
		Amount StoreAmount;
		void copy(const Store& other);
		void clear();
		
		

	public:
		Amount amnt;

		
		Store(string name = "untitled", Date expiration_date = 0, Date entry_date = 0, string maker = "untitled", unsigned unit =0, unsigned location_section = 0,
			string comment = "untitled", Amount storeAmount = Amount::kg);
		Store(const Store& other);
		Store& operator=(const Store& other);
		~Store();
	

		void setStore(string newName, Date newExpiration_date, Date newEntry_date, string newMaker,
			unsigned newUnit, unsigned newLocation_section, string newComment);
		
		 string getName() const
		{
			 return m_name;
		}
		
		Date getExpirationDate() const
		{
			return  m_expiration_date;
		}
		
		Date getEntryDate() const
		{
			return m_entry_date;
		}
		 string getMaker() const
		{
			return  m_maker;
		}
		Amount getAmount() const
		{
			return StoreAmount;
		}
		unsigned getUnit() const
		{
			return  m_unit;
		}

		unsigned  getLocationSection() const
		{
			return m_location_section;
		}
	 string getComment() const
		{
			return  m_comment;
		}
		void setName(string newName);
		void setExpirationDate(Date newExpiration_date);
		void setEntryDate(Date newEntry_date);
		void setMaker(string newMaker);
		void setAmount(Amount newAmount);
		void setUnit(unsigned newUnit);
		void setLocationSection(unsigned newLocation_section);
		void setComment(string newComment);
		void printStore();
		void printStoreToFile(std::ofstream& out);
		

	};


	 ostream& operator<<(ostream& st, const Store& object);


/**
 * File: Item.hpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2025-12-28
 */
#pragma once
#include <string>

using namespace std;

class Item
{
private:
	std::string name;		// Name of the item.
	int id;					// ID number of the item.
	int size;				// Size of the itenm.

public:
	Item();
	Item(std::string name, int id, int size);

	std::string GetName() const;
	int GetID() const;
	int GetSize() const;
	
	void SetName(std::string name);
	void SetID(int id);
	void SetSize(int size);
};


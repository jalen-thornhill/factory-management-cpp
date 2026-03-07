
/**
 * File: Factory.hpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2025-12-28
 */
#pragma once

#include <string>
#include "Item.hpp"


const int TOTAL_ITEMS = 100;			// Total items to be managed.

const int MENU_OFFSET = 100;			// Starting value for the menu options.

const int INPUT_MODIFY_ITEM = 102;		// Modify the item menu option.
const int INPUT_SEARCH_ITEMS = 103;		// Search the items menu option.
const int INPUT_REVERSE_LIST = 104;		// Reverse the items menu option.
const int INPUT_SORT_ITEMS = 105;		// Sort the items menu option.
const int INPUT_RANDOM_COSTS = 106;		// Assign random costs to the items menu option.
const int INPUT_RUN_DEMO = 107;			// Run the demo menu option.

const int INPUT_NULL = 0;				// Not to be changed.
const int PROGRAM_RUNNING = 1;			// Not to be changed.
const int PROGRAM_EXIT = 101;			// Exit menu item.

class Factory
{
private:
	Item items[TOTAL_ITEMS];
	void OutputMainMenu();
	void Output(std::string message);

public:
	Factory();
	void Setup();
	void Run();
	void MainMenu(int item);
};



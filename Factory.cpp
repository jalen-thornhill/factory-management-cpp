/**
 * File: Factory.cpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2025-12-28
 */


#include <iostream>
#include <string>
#include "DemoItem.h"
#include "Demo.h"
#include "Item.hpp"
#include "Factory.hpp"

using namespace std;


/// Initialise the fields.
int id = 0;
Factory::Factory(){
	
}


/// Setup the simulation.

void Factory::Setup(){
for(int i = 0 ; i <= TOTAL_ITEMS - 1; i++){
	int id = i + 1;
	items[i] = Item("Item " + to_string(id + 1), id + 1, 10);
}
}

/// Run the simulation.

void Factory::Run(){

	Setup();

	int status = PROGRAM_RUNNING;
	int input = INPUT_NULL;

	while (status == PROGRAM_RUNNING)
	{
		OutputMainMenu();
		cin >> input;
		input = input + MENU_OFFSET;
		if (input != PROGRAM_EXIT)
			MainMenu(input);
		else
			break;
	}

}


/// Perform the menu selection.

void Factory::MainMenu(int item)
{
	switch (item)
	{
		case INPUT_MODIFY_ITEM:
		{
			int index;
			cout<<"please enter the index you want to modify: ";
			cin >> index;
			
			if (index >= 0 && index <= TOTAL_ITEMS - 1){
					string newName ="";
					int newSize = 0;
					cout<<"enter new name here \n";
					cin>> newName;
					cout<< "enter new size here \n";
					cin>> newSize;
					items[index].SetName(newName);
					items[index].SetSize(newSize);

					cout<<"item modified \n";

			} else {
				cout<<"invalid index \n";
			}
			break;
		}

		case INPUT_SEARCH_ITEMS:
		{
			break;
		}

		case INPUT_REVERSE_LIST:
		{
			break;
		}

		case INPUT_SORT_ITEMS:
		{
			break;
		}

		case INPUT_RANDOM_COSTS:
		{
			break;
		}

		case INPUT_RUN_DEMO:
		{
			Demo demo;
			demo.Run();
			break;
		}
	}
}


/// Display the main menu.

void Factory::OutputMainMenu()
{
	cout << "Main Menu\n";
	cout << "---------\n\n";
	cout << "Modify Item - 2\n";
	cout << "Run Demo - 7\n";
	cout << "Exit - 1\n";
	cout << "\n";
	cout << "Select an item: ";

	
}


/// Output the text to the screen.

void Factory::Output(std::string message)
{
	cout << message;
}




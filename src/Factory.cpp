/**
 * File: Factory.cpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2026-06-16
 */


#include "Factory.hpp"
#include "StackItems.hpp"
#include "RandomItems.hpp"
#include "SortItems.hpp"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Factory::Factory() {
    Setup();
}

void Factory::Setup() {
    for (int i = 0; i < TOTAL_ITEMS; i++) {
        int itemId = i + 1;
        string itemName = "Item " + to_string(itemId);

        items[i] = Item(itemName, itemId, 10);
    }
}

void Factory::Run() {
    MainMenu();
}

void Factory::MainMenu() {
    int choice;

    do {
        cout << "\n============Factory Management Menu============\n";
        cout << "1. Display items\n";
        cout << "2. Modify item\n";
        cout << "3. Search item by ID\n";
        cout << "4. Search item by Name\n";
        cout << "5. Display items in reverse order\n";
        cout<< "6. Sort Items by ID\n";
        cout << "7. Sort Items by Size\n";
        cout << "8. Randomize item sizes (Uniform)\n";
        cout << "9. Randomize item sizes (Normal)\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            DisplayItems();
            break;

        case 2:
            ModifyItem();
            break;

        case 3:
            SearchItemByID();
            break;

        case 4:
            SearchItemByName();
            break;

        case 5:
            DisplayItemsReverse();
            break;
        case 6:
            SortItemsByID();
            break;
        case 7:
            SortItemsBySize();
            break;

        case 8:
            RandomizeItemsUniform();
            break;
        
        case 9:
            RandomizeItemsNormal(); 
            break;

        case 0:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice.\n";
            break;
        }

    } while (choice != 0);
}

void Factory::DisplayItems() const {
    cout << "\nFactory Items:\n\n";
    cout << left << setw(10) << "Array Position"<<setw(20) << "Name" << setw(10) << "ID" << setw(10) << "Size" << endl;
    cout << string(40, '-') << endl;

    for (int i = 0; i < TOTAL_ITEMS; i++) {
        cout << left << setw(10) << i 
            << setw(20) << items[i].getName()
             << setw(10) << items[i].getId()
             << setw(10) << items[i].getSize() << endl;
    }
}

void Factory::ModifyItem(){
    int position;
    string newName;
    int newSize;


    cout << "Enter the array position of the item to modify (0-" << TOTAL_ITEMS - 1 << "): ";
    cin >> position;

    if (position < 0 || position >= TOTAL_ITEMS) {
        cerr << "Invalid position.\n";
        return;
    }

    cout<< "Item details:\n";
    cout << "Name: " << items[position].getName() << endl;
    cout << "ID: " << items[position].getId() << endl;
    cout << "Size: " << items[position].getSize() << endl;

    cout << "Enter new name: ";
    cin.ignore();
    getline(cin, newName);

    cout << "Enter new size: ";
    cin >> newSize;

    if (newSize < 0) {
        cerr << "Size cannot be negative.\n";
        return;
    }

    items[position].setName(newName);
    items[position].setSize(newSize);


    cout << "Item updated successfully.\n";
    cout<< "Name: " << items[position].getName() << endl;
    cout << "ID: " << items[position].getId() << endl;
    cout << "Size: " << items[position].getSize() << endl;
}

void Factory::SearchItemByID() const {
    int targetID;
    cout << "Enter the ID of the item to search for: ";
    cin >> targetID;

    SearchItems searcher;
    int index = searcher.SearchByID(items, TOTAL_ITEMS, targetID);

    if (index != -1) {
        cout << "Item found at array position: " << index << endl;
        cout << "Name: " << items[index].getName() << endl;
        cout << "ID: " << items[index].getId() << endl;
        cout << "Size: " << items[index].getSize() << endl;
    } else {
        cout << "Item with ID " << targetID << " not found.\n";
    }
}

void Factory::SearchItemByName() const {
    string targetName;
    cout << "Enter the name of the item to search for: ";
    cin.ignore();
    getline(cin, targetName);

    SearchItems searcher;
    int index = searcher.SearchByName(items, TOTAL_ITEMS, targetName);

    if (index != -1) {
        cout << "Item found at array position: " << index << endl;
        cout << "Name: " << items[index].getName() << endl;
        cout << "ID: " << items[index].getId() << endl;
        cout << "Size: " << items[index].getSize() << endl;
    } else {
        cout << "Item with name \"" << targetName << "\" not found.\n";
    }
}

void Factory::DisplayItemsReverse() const {
    // create StackItems stack
    StackItems stack;
   
    for (int i = 0; i < TOTAL_ITEMS; i++) {
        stack.Push(items[i]);
    }
    
    Item temp;

    
    cout << "\nFactory Items in Reverse Order:\n\n";
    cout << left << setw(10) << "Array Position"<<setw(20) << "Name" << setw(10) << "ID" << setw(10) << "Size" << endl;
    cout << string(40, '-') << endl;
    int position = TOTAL_ITEMS - 1;
    while (!stack.IsEmpty()) {
        stack.Pop(temp);
        cout << left << setw(10) << position 
            << setw(20) << temp.getName()
             << setw(10) << temp.getId()
             << setw(10) << temp.getSize() << endl;
        position--;
    }
}

void Factory::RandomizeItemsUniform() {
    RandomItems randomizer;
    randomizer.RandomizeUniform(items, TOTAL_ITEMS, 10, 100);
    cout << "Items randomized uniformly.\n";
    DisplayItems();
}

void Factory::RandomizeItemsNormal() {
    RandomItems randomizer;
    randomizer.RandomizeNormal(items, TOTAL_ITEMS, 50.0, 5.0);
    cout << "Items randomized with normal distribution.\n";
    DisplayItems();
}

void Factory::SortItemsByID() {
    SortItems sorter;
    sorter.SortByID(items, TOTAL_ITEMS);

    cout << "Items sorted by ID.\n";
    DisplayItems();
}


void Factory::SortItemsBySize() {
    SortItems sorter;
    sorter.SortBySize(items, TOTAL_ITEMS);

    cout << "Items sorted by size.\n";
    DisplayItems();
}
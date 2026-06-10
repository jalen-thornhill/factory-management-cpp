/**
 * File: Factory.cpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2026-06-10
 */


#include "Factory.hpp"

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

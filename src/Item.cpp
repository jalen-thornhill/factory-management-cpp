/**
 * File: Item.cpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2026-06-09
 */

 #include "Item.hpp"
using namespace std;
 // Default constructor
Item::Item() {
    name = "";
    id = 0;
    size = 0;
}

// Parameterized constructor
Item::Item(string name, int id, int size) {
    this->name = name;
    this->id = id;
    this->size = size;
}

// Getters
string Item::getName() const {
    return name;
}

int Item::getId() const {
    return id;
}

int Item::getSize() const {
    return size;
}


// Setters
void Item::setName(string name) {
    this->name = name;
}

void Item::setId(int id) {
    this->id = id;
}

void Item::setSize(int size) {
    this->size = size;
}

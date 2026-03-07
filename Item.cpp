/**
 * File: Item.cpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2025-12-28
 */

 // represents an item with a name, ID, and size.
#include <iostream>
#include <string>
#include "Item.hpp"

using namespace std;


/// Intialises the item attributes.

Item::Item(){
	name = "";
	id = 0;
	size = 0;
}


/// Intialises the item attributes.


Item::Item(string name, int id, int size){
	this->name = name;
	this-> id = id;
	this->size = size; 
}

/// Return the name of the item.

string Item::GetName() const{
	return name;
}


/// ID of the item.
int Item::GetID() const {
	return id;
}

/// Return the size of the item.

int Item::GetSize() const{
	return size;
}


/// Set the name of the item.

void Item::SetName(string name){
	this->name = name;
}


/// Set the ID of the item.

void Item::SetID(int id){
	this->id = id;
}


/// Set the size of the item.

void Item::SetSize(int size){
	this->size = size;

}

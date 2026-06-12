/**
 * File: DemoItem.cpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2025-12-28
 */


#include "DemoItem.h"


/// Initialise the value to 0.

DemoItem::DemoItem()
{
	value = 0;
}


/// Sets the value.

void DemoItem::Set(int value)
{
	this->value = value;
}


/// Gets the value.

int DemoItem::Get()
{
	return value;
}



/**
 * File: StackItems.hpp
 * Author: Jalen Thornhill
 * Created: 2026-06-11
 * Last Modified: 2026-06-12
 */

#pragma once

#include "Item.hpp"

const int STACK_CAPACITY = 100;




class StackItems {
private:
    Item items[STACK_CAPACITY];
    int top;

public:
    StackItems();


bool IsEmpty() const;
bool IsFull() const;
bool Push(const Item& item);
bool Pop(Item& item);
bool Peek(Item& item) const;
};                                                       

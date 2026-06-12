#include "StackItems.hpp"
/**
 * File: StackItems.cpp
 * Author: Jalen Thornhill
 * Created: 2026-06-11
 * Last Modified: 2026-06-12
 */

StackItems::StackItems() : top(-1) {}

bool StackItems::IsEmpty() const {
    return top == -1;
}

bool StackItems::IsFull() const {
    return top == STACK_CAPACITY - 1;
}

bool StackItems::Push(const Item& item) {
    if (IsFull()) {
        return false; // Stack is full
    }
    items[++top] = item;
    return true;
}

bool StackItems::Pop(Item& item) {
    if (IsEmpty()) {
        return false; // Stack is empty
    }
    item = items[top--];
    return true;
}

bool StackItems::Peek(Item& item) const {
    if (IsEmpty()) {
        return false; // Stack is empty
    }
    item = items[top];
    return true;
}
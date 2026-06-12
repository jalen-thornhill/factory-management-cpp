/**
 * File: QueueItems.hpp
 * Author: Jalen Thornhill
 * Created: 2026-06-12
 * Last Modified: 2026-06-12
 */
#pragma once

#include "Item.hpp"

const int QUEUE_CAPACITY = 100;

class QueueItems {
private:
    Item items[QUEUE_CAPACITY];
    int front;
    int rear;
    int count;

public:
    QueueItems();
    bool IsEmpty() const;
bool IsFull() const;
bool Enqueue(const Item& item);
bool Dequeue(Item& item);
bool Front(Item& item) const;
};
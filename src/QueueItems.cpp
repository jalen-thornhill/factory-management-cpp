/**
 * File: QueueItems.cpp
 * Author: Jalen Thornhill
 * Created: 2026-06-12
 * Last Modified: 2026-06-12
 */

#include "QueueItems.hpp"

QueueItems::QueueItems() {
    front = 0;
    rear = -1;
    count = 0;
}

bool QueueItems::IsEmpty() const {
    return count == 0;
}

bool QueueItems::IsFull() const {
    return count == QUEUE_CAPACITY;
}

bool QueueItems::Enqueue(const Item& item) {
    if (IsFull()) {
        return false;
    }
    rear = (rear + 1) % QUEUE_CAPACITY;
    items[rear] = item;
    count++;
    return true;
}

bool QueueItems::Dequeue(Item& item) {
    if (IsEmpty()) {
        return false;
    }
    item = items[front];
    front = (front + 1) % QUEUE_CAPACITY;
    count--;
    return true;
}

bool QueueItems::Front(Item& item) const {
    if (IsEmpty()) {
        return false;
    }
    item = items[front];
    return true;
}
/**
 * File: SearchItems.cpp
 * Author: Jalen Thornhill
 * Created: 2026-06-12
 * Last Modified: 2026-06-15
 */

#include "SearchItems.hpp"

SearchItems::SearchItems() {
}

int SearchItems::SearchByID(const Item items[], int totalItems, int targetID) const {
    for (int i = 0; i < totalItems; ++i) {
        if (items[i].getId() == targetID) {
            return i;
        }
    }
    return -1;
}

int SearchItems::SearchByName(const Item items[], int totalItems, const string& targetName) const {
    for (int i = 0; i < totalItems; ++i) {
        if (items[i].getName() == targetName) {
            return i;
        }
    }
    return -1;
}
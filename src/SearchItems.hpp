/**
 * File: SearchItems.hpp
 * Author: Jalen Thornhill
 * Created: 2026-06-12
 * Last Modified: 2026-06-15
 */

#pragma once

#include "Item.hpp"
#include <string>

using namespace std;

class SearchItems {
public:
    SearchItems();
    int SearchByID(const Item items[], int totalItems, int targetID) const;
    int SearchByName(const Item items[], int totalItems, const string& targetName) const;
};
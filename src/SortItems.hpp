#pragma once

#include "Item.hpp"

class SortItems {
public:
    SortItems();
    void SortBySize(Item items[], int totalItems) const;
    void SortByID(Item items[], int totalItems) const;
};
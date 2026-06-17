#pragma once

#include "Item.hpp"

class SortItems {
public:
    SortItems();
    void SortBySize(Item items[], int totalItems) const;
};
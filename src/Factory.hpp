
/**
 * File: Factory.hpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2026-06-15
 */
#pragma once

#include "Item.hpp"
#include "SearchItems.hpp"

const int TOTAL_ITEMS = 100;

class Factory {
private:
    Item items[TOTAL_ITEMS];

public:
    Factory();

    void Setup();
    void Run();
    void MainMenu();
    void ModifyItem();
    void DisplayItems() const;

    void SearchItemByID() const;
void SearchItemByName() const;

void DisplayItemsReverse() const;
void RandomizeItemsUniform();
void RandomizeItemsNormal();
};


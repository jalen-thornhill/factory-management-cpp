
/**
 * File: Factory.hpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2025-12-28
 */
#pragma once

#include "Item.hpp"

const int TOTAL_ITEMS = 100;

class Factory {
private:
    Item items[TOTAL_ITEMS];

public:
    Factory();

    void Setup();
    void Run();
    void MainMenu();
    void DisplayItems() const;
};


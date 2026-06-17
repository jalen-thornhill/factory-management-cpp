#pragma once

#include "Item.hpp"

class RandomItems {
public:
    RandomItems();
    void RandomizeUniform(Item items[], int totalItems, int minValue, int maxValue) const;
    void RandomizeNormal(Item items[], int totalItems, double mean, double stddev) const;
};
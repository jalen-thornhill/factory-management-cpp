#include "RandomItems.hpp"

RandomItems::RandomItems() {

    
}

void RandomItems::RandomizeUniform(Item items[], int totalItems, int minValue, int maxValue) const {
    for (int i = 0; i < totalItems; i++) {
        int randomSize = minValue + rand() % (maxValue - minValue + 1);
        items[i].setSize(randomSize);
    }
}

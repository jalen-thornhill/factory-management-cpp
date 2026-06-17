#include "RandomItems.hpp"
#include<random>

RandomItems::RandomItems() {

    
}

void RandomItems::RandomizeUniform(Item items[], int totalItems, int minValue, int maxValue) const {
    for (int i = 0; i < totalItems; i++) {
        int randomSize = minValue + rand() % (maxValue - minValue + 1);
        items[i].setSize(randomSize);
    }
}

void RandomItems::RandomizeNormal(Item items[], int totalItems, double mean, double stddev) const {
    std::default_random_engine generator;
    std::normal_distribution<double> distribution(mean, stddev);

    for (int i = 0; i < totalItems; i++) {
        int randomSize = static_cast<int>(distribution(generator));
        items[i].setSize(randomSize);
    }
} 

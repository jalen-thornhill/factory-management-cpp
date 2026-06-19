#include "SortItems.hpp"

SortItems::SortItems() {
}

void SortItems::SortBySize(Item items[], int totalItems) const {
    for (int i = 0; i < totalItems - 1; i++) {
        for (int j = 0; j < totalItems - i - 1; j++) {
            if (items[j].getSize() > items[j + 1].getSize()) {
                // Swap items[j] and items[j + 1]
                Item temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
}

void SortItems::SortByID(Item items[], int totalItems) const {
    for (int i = 0; i < totalItems - 1; i++) {
        for (int j = 0; j < totalItems - i - 1; j++) {
            if (items[j].getId() > items[j + 1].getId()) {
                Item temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
}
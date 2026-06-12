/**
 * File: Item.hpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2026-06-09
 */
#pragma once

#include <string>

class Item {
private:
    std::string name;
    int id;
    int size;

public:
    Item();
    Item(std::string name, int id, int size);

    std::string getName() const;
    int getId() const;
    int getSize() const;

    void setName(std::string name);
    void setId(int id);
    void setSize(int size);
};

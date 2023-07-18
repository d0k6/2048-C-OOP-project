#include "tile.h"
    
    Tile::Tile() : value(0) {}
    Tile::~Tile() {};

    int Tile::getValue() const 
    {
        return value;
    }

    void Tile::setValue(int newValue) 
    {
        value = newValue;
    }
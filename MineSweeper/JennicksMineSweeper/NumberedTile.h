#ifndef NUMBERED_TILE_H
#define NUMBERED_TILE_H
#include "Tile.h"

class NumberedTile : public Tile
{
private:
    int adjacent_mines;
public:
    NumberedTile(size_t x, size_t y, int adjacent_mines);
};

#endif // NUMBERED_TILE_H

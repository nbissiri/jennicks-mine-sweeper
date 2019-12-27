#include "NumberedTile.h"

NumberedTile::NumberedTile(size_t x, size_t y, int adjacent_mines)
    : Tile(x, y), adjacent_mines(adjacent_mines)
{
}



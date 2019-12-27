#include "EmptyTile.h"

EmptyTile::EmptyTile(size_t x, size_t y, MineField &f)
    : Tile(x, y), f(f)
{
}


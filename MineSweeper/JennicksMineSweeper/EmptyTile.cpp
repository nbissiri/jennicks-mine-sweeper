/*
    Copyright (C) 2019 Nick Bissiri and Jennifer Luu
    Licensed under the GNU General Public License
    See README for the full copyright notice
*/

#include "EmptyTile.h"

EmptyTile::EmptyTile(size_t x, size_t y, MineField &f)
    : Tile(x, y), f(f)
{
}


/*
    Copyright (C) 2019 Nick Bissiri and Jennifer Luu
    Licensed under the GNU General Public License
    See README for the full copyright notice
*/

#include "NumberedTile.h"

NumberedTile::NumberedTile(size_t x, size_t y, int adjacent_mines)
    : Tile(x, y), adjacent_mines(adjacent_mines)
{
}



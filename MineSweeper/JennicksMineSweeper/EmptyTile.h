/*
    Copyright (C) 2019 Nick Bissiri and Jennifer Luu
    Licensed under the GNU General Public License
    See README for the full copyright notice
*/

#ifndef EMPTY_TILE_H
#define EMPTY_TILE_H
#include "Tile.h"
#include "MineField.h"

class EmptyTile : public Tile
{
private:
    const MineField &f;
public:
    EmptyTile(size_t x, size_t y, MineField &f);

};

#endif // EMPTY_TILE_H

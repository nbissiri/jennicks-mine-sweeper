/*
    Copyright (C) 2019 Nick Bissiri and Jennifer Luu
    Licensed under the GNU General Public License
    See README for the full copyright notice
*/

#ifndef MINE_FIELD_H
#define MINE_FIELD_H
#include <cstddef> // size_t
#include "Tile.h"

/* MineField defines the grid and field of play for a game of MineSweeper. 
 * Once initialized, each position on the grid will either be a safe spot or a 
 * mine.
 */
class MineField {
private:
    size_t width, height; // width and height of the grid
    int mines;
    // additional private data members go here
    
    
    
    
public:
    // constructs MineField
    MineField(size_t width=10, size_t height=10, int mines=10);
    
    // returns the tile at the x, y coordinates
    Tile &at(size_t x, size_t y);
};

#endif // MINE_FIELD_H

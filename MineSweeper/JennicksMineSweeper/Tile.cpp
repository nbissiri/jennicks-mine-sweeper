/*
    Copyright (C) 2019 Nick Bissiri and Jennifer Luu
    Licensed under the GNU General Public License
    See README for the full copyright notice
*/

#include "Tile.h"
#include "DisplayManager.h"

Tile::Tile(size_t x, size_t y) 
    : vis(hidden), x(x), y(y)
{
}

bool Tile::flag() {
    bool changed {false};
    if (this->vis == Tile::flagged) {
        this->vis = Tile::hidden;
        changed = true;
    } else if (this->vis == Tile::hidden) {
        this->vis = Tile::flagged;
        changed = true;
    }
    if (changed) {
        DisplayManager::display_position(this);
    }
    return changed;
}

bool Tile::question() {
    bool changed {false};
    if (this->vis == Tile::questioned) {
        this->vis = Tile::hidden;
        changed = true;
    } else if (this->vis == Tile::hidden) {
        this->vis = Tile::questioned;
        changed = true;
    }
    if (changed) {
        DisplayManager::display_position(this);
    }
    return changed;
}

Tile::visibility Tile::get_visibility() {
    return this->vis;
}

std::pair<size_t, size_t> Tile::get_coords() {
    return std::pair {this->x, this->y};
}

size_t Tile::get_x() {
    return this->x;
}

size_t Tile::get_y() {
    return this->y;
}

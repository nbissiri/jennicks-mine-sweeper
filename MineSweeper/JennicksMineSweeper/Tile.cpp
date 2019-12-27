#include "Tile.h"
#include "DisplayManager.h"


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

std::pair<int, int> Tile::get_coords() {
    return std::pair {this->x, this->y};
}

int Tile::get_x() {
    return this->x;
}

int Tile::get_y() {
    return this->y;
}

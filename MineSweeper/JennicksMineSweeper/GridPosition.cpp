#include "GridPosition.h"
#include "DisplayManager.h"

bool GridPosition::flag() {
    bool changed {false};
    if (this->vis == GridPosition::flagged) {
        this->vis = GridPosition::hidden;
        changed = true;
    } else if (this->vis == GridPosition::hidden) {
        this->vis = GridPosition::flagged;
        changed = true;
    }
    if (changed) {
        DisplayManager::display_position(this);
    }
}

bool GridPosition::question() {
    bool changed {false};
    if (this->vis == GridPosition::questioned) {
        this->vis = GridPosition::hidden;
        changed = true;
    } else if (this->vis == GridPosition::hidden) {
        this->vis = GridPosition::questioned;
        changed = true;
    }
    if (changed) {
        DisplayManager::display_position(this);
    }
}

GridPosition::visibility GridPosition::get_visibility() {
    return this->vis;
}

GridPosition::get_coords() {
    return std::pair {this->x, this->y};
}

GridPosition::get_x() {
    return this->x;
}

GridPosition::get_y() {
    return this->y;
}
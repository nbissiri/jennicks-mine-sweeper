#include "GridPosition.h"
#include "DisplayManager.h"

GridPosition::GridPosition(size_t x, size_t y)
    : x {x}, y {y}, c {' '}, player {0}{
}

bool GridPosition::mark(int player, char c) { 
    if (this->player == 0) {
        this->c = c;
        this->player = player;
        DisplayManager::updated_positions.push_back(this);
        return true;
    } else {
        return false;
    }
}

size_t GridPosition::get_x() {
    return this->x;
}

size_t GridPosition::get_y() {
    return this->y;
}

char GridPosition::get_c() {
    return this->c;
}

int GridPosition::get_player() {
    return this->player;
}


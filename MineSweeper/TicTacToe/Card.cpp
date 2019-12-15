#include "Card.h"
#include "DisplayManager.h"

Card::Card(size_t x, size_t y)
    : x {x}, y {y}, c {' '}, player {0}{
}

bool Card::mark(int player, char c) { 
    if (this->player == 0) {
        this->c = c;
        this->player = player;
        DisplayManager::updated_positions.push_back(this);
        return true;
    } else {
        return false;
    }
}

size_t Card::get_x() {
    return this->x;
}

size_t Card::get_y() {
    return this->y;
}

char Card::get_c() {
    return this->c;
}

int Card::get_player() {
    return this->player;
}


#include "DisplayManager.h"

void DisplayManager::update_view() {
    for (Tile *p : updated_positions) {
        // update the view at this position
    }
}

void DisplayManager::display_position(Tile *p) {
    DisplayManager::updated_positions.push_back(p);
}

std::vector<Tile*> DisplayManager::updated_positions {};
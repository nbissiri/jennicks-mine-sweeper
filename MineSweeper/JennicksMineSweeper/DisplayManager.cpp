#include "DisplayManager.h"

void DisplayManager::update_view() {
    for (GridPosition *p : updated_positions) {
        // update the view at this position
    }
}

void DisplayManager::display_position(GridPosition *p) {
    DisplayManager::updated_positions.push_back(p);
}

std::vector<GridPosition*> DisplayManager::updated_positions {};
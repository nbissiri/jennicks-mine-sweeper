#ifndef DISPLAYMANAGER_H
#define DISPLAYMANAGER_H
#include <vector>
#include "GridPosition.h"

class DisplayManager {
    friend class GridPosition;

private:
    static std::vector<GridPosition*> updated_positions;
    static void display_position(GridPosition* p);

public:
    static void update_view();
};

#endif // DISPLAYMANAGER_H

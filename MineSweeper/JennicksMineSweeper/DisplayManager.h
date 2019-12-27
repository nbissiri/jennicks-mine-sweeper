#ifndef DISPLAY_MANAGER_H
#define DISPLAY_MANAGER_H
#include <vector>
#include "Tile.h"

class DisplayManager {
    friend class Tile;
    friend class Mine;
    friend class SafeSpot;
    friend class NumberedSpot;
    friend class EmptySpot;

private:
    static std::vector<Tile*> updated_positions;
    static void display_position(Tile* p);
public:
    static void update_view();
};

#endif // DISPLAY_MANAGER_H

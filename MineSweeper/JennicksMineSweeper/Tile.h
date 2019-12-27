#ifndef TILE_H
#define TILE_H
#include <utility>

/* Tile is an abstract class
 */
class Tile {
    
public: enum visibility {hidden, revealed, flagged, questioned};

private:
    visibility vis;
    
    // x and y coordinates
    int x;
    int y;
public:

    // reveal this position on the grid
    // return true if successfully revealed, false otherwise
    // only hidden positions can be revealed
    virtual bool reveal() = 0;
    
    // flag this position, or unflag it if it was flagged
    // return true if successful
    // only hidden or flagged positions can be toggled
    bool flag();
    
    // question this position, or unquestion it if it was questioned
    // return true if successful
    // only hidden or questioned positions can be toggled
    bool question();
    
    // return the visibility of this position
    visibility get_visibility();
    
    // get the 0-indexed x, y coordinates of this position on the grid
    std::pair<int, int> get_coords();
    
    // get the 0-indexed x coordinate of this position
    int get_x();
    
    // get the 0-indexed y coordinate of this position
    int get_y();
    
};


#endif // TILE_H

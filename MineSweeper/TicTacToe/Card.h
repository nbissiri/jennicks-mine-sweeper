#ifndef GRIDPOSITION_H
#define GRIDPOSITION_H
#include <string>

class Card
{
private:
    size_t x, y;
    char c;
    int player; // 0 for neutral
public:
    Card(size_t x, size_t y);
    
    // mark this position for player with the specified character
    bool mark(int player, char c);
    
    // get the 0-indexed x coordinate of this position
    size_t get_x();
    
    // get the 0-indexed y coordinate of this position
    size_t get_y();
    
    // get the display character
    char get_c();
    
    // return the player controlling this
    int get_player();
};

#endif // GRIDPOSITION_H

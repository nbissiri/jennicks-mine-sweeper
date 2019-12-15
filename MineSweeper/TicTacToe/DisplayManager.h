#ifndef DISPLAYMANAGER_H
#define DISPLAYMANAGER_H
#include <vector>
#include "Card.h"

class DisplayManager {
    friend class Card;

private:
    static std::vector<Card*> updated_positions;
    static void display_position(Card* p);

public:
    static void update_view();
};

#endif // DISPLAYMANAGER_H

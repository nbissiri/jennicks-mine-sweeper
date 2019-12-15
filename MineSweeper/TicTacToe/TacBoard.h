#ifndef TACBOARD_H
#define TACBOARD_H
#include "Card.h"
#include <vector>
// Note: Because this is a header file, we will not call 'using namespace std'
// here because this is a header file, and invoking that rule could cause
// problems in other files. Feel free to use it in TacBoard.cpp if you wish.

// ** Include additional libraries here! **

// ** ---------------------------------- **

/*
    TacBoard defines the 3x3 grid on which a game of TicTacToe is played
    It contains 9 Cards, one at each position.
*/
class TacBoard
{
private:
    // ** Declare any private data members you want to use here!  **
    // ** This should include the container(s) for your grid      **
    // ** You'll still need to initialize them in the constructor **
    vector<vector<Card>> allCards;
    // ** ------------------------------------------------------- **
public:
    // constructs a 3x3 TacBoard with Cards at every index from
    // 0,0 to 2,2
    TacBoard();
    
    // returns the position at the x, y coordinates
    Card &get_card(size_t x, size_t y);
};

#endif // TACBOARD_H

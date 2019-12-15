#include "TacBoard.h"
// Anything included in TacBoard.h will also be available in TacBoard.cpp
// You can add more include statements, or the 'using' statement

// ** Implement the constructor TacBoard(), and the member function **
// ** get_position(x,y) below.                                      **

// Recall that a constructor is called when an object of this class is
// initialized. Use this time to initialize your private data member(s).
TacBoard::TacBoard() {

}

// get_position(x,y) returns a reference to a TacBoard (denoted with the '&')
// While implementing the body of the function you don't need to worry about
// this detail. Just find and return the GridPosition at the given indices.
// Simply including the '&' will cause the returned value to be a reference
// to it's original in your TacBoard, meaning changes to it are changes
// to the original too.
Card &TacBoard::get_card(size_t x, size_t y) {
    
    // these two lines are placeholders -------------
    // delete them before implementing this function-
        Card *gp = new Card(0, 0);
        return *gp;
    // ----------------------------------------------
}

// ** ------------------------------------------------------------- **
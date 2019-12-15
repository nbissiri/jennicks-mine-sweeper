#include "DisplayManager.h"
#include <iostream>
using namespace std;

// the display string for our game of TicTacToe
static string display_string = string() // empty string
    + "   |   |   \n"
    + "-----------\n"
    + "   |   |   \n" 
    + "-----------\n"
    + "   |   |   \n";
                      
// constants to help with displaying 
static const size_t x_table[] {1, 5, 9}; // x index to display at
static size_t y_table[] {0, 2, 4}; // y index to display at
static size_t line_length = 12; // number of characters per line

void DisplayManager::update_view() {
    for (Card *p : updated_positions) {
        size_t x {p->get_x()};
        size_t y {p->get_y()};
        char c {p->get_c()};
        // index to update
        size_t index { x_table[x] + y_table[y] * line_length };
        display_string.at(index) = c;
    }
    updated_positions.clear();
    cout << endl << display_string << endl;
}

void DisplayManager::display_position(Card *p) {
    DisplayManager::updated_positions.push_back(p);
}

vector<Card*> DisplayManager::updated_positions {};


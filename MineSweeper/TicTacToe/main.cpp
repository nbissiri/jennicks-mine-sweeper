#include <iostream>
#include "DisplayManager.h"
#include "TacBoard.h"
#include "GridPosition.h"
using namespace std;

void clear_screen() {
    cout << string(100, '\n');
}

// return 0 if no winner, 1 if player 1, 2 if plyaer 2, and 3 if draw
int evaluate(TacBoard b) {
    bool draw = true;
    
    // all wining 3-in-a-row combinations
    size_t rows[8][3][2] = 
    { {{0, 0}, {0, 1}, {0, 2}},
      {{1, 0}, {1, 1}, {1, 2}},
      {{2, 0}, {2, 1}, {2, 2}},
      {{0, 0}, {1, 0}, {2, 0}},
      {{0, 1}, {1, 1}, {2, 1}},
      {{0, 2}, {1, 2}, {2, 2}},
      {{0, 0}, {1, 1}, {2, 2}},
      {{2, 0}, {1, 1}, {0, 2}}
    };
    
    for (size_t i{0}; i < 8; i++) {
        
        int player_to_win = -1;
        bool player_won = true;
        for (size_t j{0}; j < 3; j++) {
            size_t x {rows[i][j][0]};
            size_t y {rows[i][j][1]};
            GridPosition p = b.get_position(x, y);
            int p_player = p.get_player();
            if (p_player == 0) {
                draw = false;
                player_won = false;
            } else if (player_to_win == -1) {
                player_to_win = p_player;
            } else if (p_player != player_to_win) {
                player_won = false;
            }
        }
        if (player_won) {
            return player_to_win;
        }
    }
    if (draw) {
        return 3;
    } else {
        return 0;
    }
}

void input(int &x, int &y, int player) {
    while (true) {
        cout << "Player " << player 
             << "'s turn. Enter the indices of your move: ";
        cin >> x >> y;
        if (x < 3 && x >= 0 && y < 3 && y >= 0) {
            return;
        } else {
            cout << "Invalid move, try again. "
                 << "Indices start with 0 0 at the top left." 
                 << endl << endl;
        }
    }
    
}

int main() {
    enum Winner { none, player1, player2, draw };
    Winner winner = none;
    TacBoard b{};
    int player = 1;
    char c = 'X';
    while (winner == none) {
        // display the game
        clear_screen();
        DisplayManager::update_view();
        
        bool marked {false}; // true once a valid move has been made
        while (!marked) {        
            // grab input from the user
            int x, y;
            input(x, y, player);
            // process the input
            GridPosition &pos = b.get_position(x, y);
            marked = pos.mark(player, c);
            if (!marked) {
                cout << "That position is already marked, choose another!" << endl << endl;
            }
        }
        int result = evaluate(b);
        if (result != 0) {
            switch(result) {
                case 1: winner = player1; break;
                case 2: winner = player2; break;
                case 3: winner = draw; break;
                default: break;
            }
        }
        if (player == 1) {
            player = 2;
            c = 'O';
        } else if (player == 2) {
            player = 1;
            c = 'X';
        }
    }
    clear_screen();
    DisplayManager::update_view();
    
    switch (winner) {
        case none : break;
        case player1 : cout << "Player 1 wins!" << endl; break;
        case player2 : cout << "Player 2 wins!" << endl; break;
        case draw : cout << "Draw!" << endl;
    }
    
    std::cout << "Thanks for playing!" << std::endl;
    return 0;
}
#include "problem2.h"
#include <iostream>
#include <string>
#include <vector>
// ** Part 1. Add your include statement here! ** 

using namespace std; // This line allows us to use cout, endl, string, and 
                     // vector while ommitting 'std::'


/*
    lengthen() is a helper function you will use for part 5
    calling lengthen(name) will 'lengthen' the name passed to this function
    
    The parameter name is passed by reference (signified by the '&'). This means
    any changes to it within the function change the original copy passed into
    the function.
*/
void lengthen(string &name) {
    for (size_t i {0}; i < 4; i++) {
        name.push_back(name.back());
    }
}

void problem2() {
    cout << endl << "--------------------" << endl;
    
    // ** Part 2. Declare and initialize your vector here! **
    vector<string> cats {"Lucy", "Click", "Bella", "Sasha"};
    
    // ** Part 3. Use push_back() to add us to the vector! **
    cats.push_back("Nick");
    cats.push_back("Jenn");
    
    // ** Part 4. Put your for-each loop here! **
    for (string catName : cats) {
        cout << catName << endl;
    }
    
    // ** Part 5. Put your for loop here! **
    for (size_t i {0}; i < cats.size(); i++){
        lengthen(cats.at(i));
        cout << cats.at(i) << endl;
    }
    
    // ** Part 6. Put your while loop here! **
    
    string jenn = "Jenn";
    lengthen(jenn);
    string nick = "Nick";
    lengthen(nick);
    
    while(cats.size() > 0) {
        if (cats.back() != jenn && cats.back() != nick) {
            cout << "Goodnight, " << cats.back() << " you're the best kitty <3" << endl;
        }
        cats.pop_back();
    }
}

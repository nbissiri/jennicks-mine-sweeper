#include "problem2.h"
#include <iostream>
#include <string>
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
    
    // ** Part 3. Use push_back() to add us to the vector! **
    
    // ** Part 4. Put your for-each loop here! **
    
    // ** Part 5. Put your for loop here! **
    
    // ** Part 6. Put your while loop here! **

}

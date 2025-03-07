#include <iostream>
using namespace std;



/* Including Header Files */
#include "functions.h"




int main() {
    string nameP1, nameP2;
    int choiceP1, choiceP2;

    int grid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(size_t i {0}; i<9; i++) {

        displayGrid(grid);



        
    }
}



/* Function Definations */



/*
Display a 3*3 grid with number in each of them
Ask player for input

*/
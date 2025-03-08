/* Including standard files */
#include <iostream>
using namespace std;



/* Including header files */
#include "functions.h"



/* Main function */
int main() {
    string nameP1, nameP2;
    int choiceP1, choiceP2;

    int grid[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // To display the grid first
    displayGrid(grid, 0);

    for(int i {0}; i<9; i++) {
        
        if(i%2 == 0) {

            cout << "Player 1's turn: ";
            cin >> choiceP1;

            // Terminate the program if the player enters incorrect choice
            if(!verifyChoice((choiceP1), grid)) {break;}

        }


        else {

            cout << "Player 2's turn: ";
            cin >> choiceP2;

            // Terminate the program if the player enters incorrect choice
            if(!verifyChoice((choiceP2), grid)) {break;}

        }
    
        // Display grid
        displayGrid(grid, i);

        // Check winner
        if(isGameOver(grid) == 1) {
            cout << "PLAYER 1 WINS!!!" << endl;
            break;
        } else if(isGameOver(grid) == 2) {
            cout << "PLAYER 2 WINS!!!" << endl;
            break;
        }


        cout << endl;
        cout << endl;
    
    }
}
#include <iostream>
using namespace std;

void greetings() {
    cout << "WELCOME! LET'S PLAY TIC-TAC-TOE" << endl;
}

// To verify if the choice entered is correct or not. If correct then return true.
bool verifyChoice(int choice, int* grid) {
    if(choice >= 1 && choice <=9 && *(grid+choice-1) >= 1 && *(grid+choice-1) <= 9) {
        *(grid+choice-1) = 0;
        return true;
    } else {return false;}
}

// To check if we need to print 'X' (return true) or 'O'(return false). 
char selectElement(int a) {
    if(a%2 == 0) {
        return 'X';
    } else {return 'O';}
}

// DONE
void displayGrid(int* grid, int a) {
    for(size_t i {0}; i<3; i++) {
        for(size_t j {0}; j<3; j++) {

            // For emplty spaces, just mark the number
            if(*(grid + (3*i+j)) >=1 && *(grid + (3*i+j)) <= 9) {
                cout << " " << *(grid + (3*i+j)) << " ";
            }

            // For new spaces, the new chr comes in.
            else if(*(grid + (3*i+j)) == 0) {
                if(selectElement(a) == 'X') {
                    cout << " " << "X" << " ";
                    *(grid + (3*i+j)) = 100;
                } else {
                    cout << " " << "O" << " ";
                    *(grid + (3*i+j)) = 110;
                }
            }

            // For already marked places, print value depending on the value in that grid. 'X' = 100, 'O' = 110
            else {
                if(*(grid + (3*i+j)) == 100) {cout << " " << "X" << " ";}
                if(*(grid + (3*i+j)) == 110) {cout << " " << "O" << " ";}
            }            
        }
        cout << endl;
    }
}

int isGameOver(int* grid) {
    int sum {0};

    // Checking for win through row
    for(int i {0}; i<3; i++) {
        
        for(int j {0}; j<3; j++) {
            sum += *(grid + (3*i+j));
        }

        if(sum == 300) {return 1;}
        else if(sum == 330) {return 2;}
        sum = 0;
    }


    // Checking for win through column
    for(int i {0}; i<3; i++) {

        for(int j {0}; j<3; j++) {
            sum += *(grid + (i+3*j));
        }

        if(sum == 300) {return 1;}
        else if(sum == 330) {return 2;}
        sum = 0;
    }

    
    // Checking for win through diagonal 1
    sum = *(grid+0) + *(grid+4) + *(grid+8);
    if(sum == 300) {return 1;}
    else if(sum == 330) {return 2;}
    sum = 0;

    // Checking for win through diagonal 2
    sum = *(grid+2) + *(grid+4) + *(grid+6);
    if(sum == 300) {return 1;}
    else if(sum == 330) {return 2;}
    sum = 0;

    return 0;
}
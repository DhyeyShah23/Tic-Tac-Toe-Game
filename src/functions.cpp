#include <iostream>
using namespace std;

void greetings() {
    cout << "WELCOME! LET'S PLAY TIC-TAC-TOE" << endl;
}

bool verifyElement(int element) {
    if(element == 0) {
        return true;            // We want to modify this value
    } else {return false;}      // We don't want to modify this value
}


void displayGrid(int arr[3][3]) {
    for(size_t i {0}; i<3; i++) {
        for(size_t j {0}; j<3; j++) {
            cout << " " << verifyElement(arr[i][j]) << " ";
        }
        cout << endl;
    }
}


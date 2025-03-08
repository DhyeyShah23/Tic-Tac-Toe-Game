// To welcome players
void greetings();

// Bool Function to check if the player entered a valid number or not.
bool verifyChoice(int choice, int* grid);

// To choose weather to place 'X' OR 'O'.
char selectElement(int a);

// To display the grid after each move.
void displayGrid(int* grid, int a);

// To check if we have a winner or not
int isGameOver(int* grid);
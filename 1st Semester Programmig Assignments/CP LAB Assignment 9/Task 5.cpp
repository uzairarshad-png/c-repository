#include <iostream>
using namespace std;

const int SIZE = 3;

// Function to display the board
void displayBoard(char board[SIZE][SIZE]) {
    cout << "\nCurrent Board:\n";
    cout << "-------------\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "| ";
        for (int j = 0; j < SIZE; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

// Check if a player has won
bool checkWin(char board[SIZE][SIZE], char player) {
    // Check rows
    for (int i = 0; i < SIZE; i++)
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;

    // Check columns
    for (int j = 0; j < SIZE; j++)
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
            return true;

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

// Check if the game is a draw
bool checkDraw(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (board[i][j] == ' ')
                return false;
    return true;
}

int main() {
    char board[SIZE][SIZE];

    // Initialize empty board
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            board[i][j] = ' ';

    char currentPlayer = 'X';
    int row, col;
    bool gameOver = false;

    cout << "Welcome to Tic-Tac-Toe!\n";
    cout << "Player X and Player O take turns.\n";

    while (!gameOver) {
        displayBoard(board);

        cout << "Player " << currentPlayer << ", enter row (1-3): ";
        cin >> row;
        cout << "Enter column (1-3): ";
        cin >> col;

        // Validate move
        if (row < 1 || row > 3 || col < 1 || col > 3) {
            cout << "Invalid position! Try again.\n";
            continue;
        }

        if (board[row - 1][col - 1] != ' ') {
            cout << "That spot is already taken. Try again.\n";
            continue;
        }

        // Place the move
        board[row - 1][col - 1] = currentPlayer;

        // Check if the player wins
        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            cout << "\n Player " << currentPlayer << " WINS! 🎉\n";
            gameOver = true;
        }
        // Check for draw
        else if (checkDraw(board)) {
            displayBoard(board);
            cout << "\nIt's a DRAW! \n";
            gameOver = true;
        }
        else {
            // Switch player
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    return 0;
}

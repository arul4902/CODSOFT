

/*TASK 3

TIC-TAC-TOE GAME

Game Board: Create a 3x3 grid as the game board.
Players: Assign
"X"
and "O" to two players.

Display Board: Show the current state of the board.
Player Input: Prompt the current player to enter their move.
Update Board: Update the game board with the player
'
s move.

Check for Win: Check if the current player has won.
Check for Draw: Determine if the game is a draw.
Switch Players: Alternate turns between
"X"
and "O"

players.

Display Result: Show the result of the game (win, draw, or ongoing).
Play Again: Ask if the players want to play another game.*/


#include <iostream>

void displayBoard(char board[3][3]) {
    std::cout << "Game Board:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

bool isWinner(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }

    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }

    return false;
}

bool isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

void playGame() {
    char board[3][3] = {{' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '}};

    char playerX = 'X';
    char playerO = 'O';
    char currentPlayer = playerX;
    bool isGameWon = false;

    std::cout << "Players: Assign 'X' and 'O' to two players." << std::endl;

    while (!isGameWon && !isBoardFull(board)) {
        displayBoard(board);
        int row, col;

        std::cout << "Player " << currentPlayer << ", enter your move (row and column, both 0 to 2): ";
        std::cin >> row >> col;

        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            std::cout << "Invalid move, please try again." << std::endl;
            continue;
        }

        board[row][col] = currentPlayer;

  
        isGameWon = isWinner(board, currentPlayer);

      
        currentPlayer = (currentPlayer == playerX) ? playerO : playerX;
    }

    displayBoard(board);

    if (isGameWon) {
        std::cout << "Player " << currentPlayer << " wins!" << std::endl;
    } else {
        std::cout << "It's a draw!" << std::endl;
    }
}

int main() {
    std::cout << "Let the games begin! 🎮✨" << std::endl;

    char playAgain = 'Y';
    while (playAgain == 'Y' || playAgain == 'y') {
        playGame();

        std::cout << "Do you want to play again? (Y/N): ";
        std::cin >> playAgain;
    }

    std::cout << "Thank you for playing!" << std::endl;

    return 0;
}

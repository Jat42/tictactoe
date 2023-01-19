//
//  TwoPlayerGame.cpp
//  TicTacToe
//
//  Created by Jat42 on 15/01/23.
//

#include "TwoPlayerGame.hpp"

TwoPlayerGame::TwoPlayerGame() {
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            gameBoard[row][column] = ' ';
        }
    }
}

void TwoPlayerGame::start() {
    gameBoardRenderer();
    getUserInput();
}

void TwoPlayerGame::getUserInput() {
    
    char input;
    cout << "Enter " << playerTurn << " input: ";
    cin >> input;
    
    int inputIndex = int(input - '0') - 1;
    
    addXOToCoordinate(inputIndex);
    
    if (isVerticleWin() || isHorizontalWin() || isDiagonalWin()) {
        cout << currentWinner << " is Winner!\n";
    } else if (moves == 9) {
        cout << "Match Draw!\n";
    } else {
        getUserInput();
    }
}

void TwoPlayerGame::addXOToCoordinate(int index) {
    
    // Index co-ordinates
    // 0 -> 0, 0
    // 1 -> 0, 1
    // 2 -> 0, 2
    
    // 3 -> 1, 0
    // 4 -> 1, 1
    // 5 -> 1, 2
    
    // 6 -> 2, 0
    // 7 -> 2, 1
    // 8 -> 2, 2
    
    int coordinates[9][2] = {
        {0, 0},
        {0, 1},
        {0, 2},
        {1, 0},
        {1, 1},
        {1, 2},
        {2, 0},
        {2, 1},
        {2, 2}
    };
    
    int row = coordinates[index][0];
    int column = coordinates[index][1];
    
    if (gameBoard[row][column] == ' ') {
        gameBoard[row][column] = playerTurn;
        playerTurn = playerTurn == 'o' ? 'x' : 'o';
        moves++;
    }
 
    gameBoardRenderer();
}

void TwoPlayerGame::gameBoardRenderer() {
    cout << "\n";
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            if (column == 0) {
                cout << " " << gameBoard[row][column] << " |";
            } else if (column == 2) {
                cout << " " << gameBoard[row][column] << "";
            } else {
                cout << " " << gameBoard[row][column] << " |";
            }
        }
        if (row != 2) {
            cout << "\n-----------\n";
        } else {
            cout << "\n";
        }
    }
    cout << "\n";
    
}

void TwoPlayerGame::whoseWinner() {
    
    
    
}

bool TwoPlayerGame::isVerticleWin() {
    
    for (int column = 0; column < 3; column++) {
        
        if (gameBoard[0][column] == 'x' && gameBoard[1][column] == 'x' && gameBoard[2][column] == 'x') {
            currentWinner = 'x';
            return true;
        }
        
        if (gameBoard[0][column] == 'o' && gameBoard[1][column] == 'o' && gameBoard[2][column] == 'o') {
            currentWinner = 'x';
            return true;
        }
    }
    
    return false;
}

bool TwoPlayerGame::isHorizontalWin() {
    
    for (int row = 0; row < 3; row++) {
        
        if (gameBoard[row][0] == 'x' && gameBoard[row][1] == 'x' && gameBoard[row][2] == 'x') {
            currentWinner = 'x';
            return true;
        }
        
        if (gameBoard[row][0] == 'o' && gameBoard[row][1] == 'o' && gameBoard[row][2] == 'o') {
            currentWinner = 'x';
            return true;
        }
    }
    
    return false;
}

bool TwoPlayerGame::isDiagonalWin() {
    
    if (gameBoard[0][0] == 'x' && gameBoard[1][1] == 'x' && gameBoard[2][2] == 'x') {
        currentWinner = 'x';
        return true;
    } else if (gameBoard[0][2] == 'x' && gameBoard[1][1] == 'x' && gameBoard[2][0] == 'x') {
        currentWinner = 'x';
        return true;
    }
    
    if (gameBoard[0][2] == 'o' && gameBoard[1][1] == 'o' && gameBoard[2][0] == 'o') {
        currentWinner = 'x';
        return true;
    } else if (gameBoard[0][0] == '0' && gameBoard[1][1] == '0' && gameBoard[2][2] == '0') {
        currentWinner = 'x';
        return true;
    }
  
    return false;
}

TwoPlayerGame::~TwoPlayerGame() {
    cout << "Destructer called for Two player game class\n";
    currentWinner = ' ';
}

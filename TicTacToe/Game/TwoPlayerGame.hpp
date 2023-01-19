//
//  TwoPlayerGame.hpp
//  TicTacToe
//
//  Created by Jat42 on 15/01/23.
//

#ifndef TwoPlayerGame_hpp
#define TwoPlayerGame_hpp

#include <iostream>

using namespace std;

class TwoPlayerGame {
public:
    char currentWinner = ' ';
    TwoPlayerGame();
    void start();
    ~TwoPlayerGame();
private:
    char gameBoard[3][3], playerTurn = 'o';
    int moves = 0;
    
    void gameBoardRenderer();
    
    void whoseWinner();
    void whoseTurn();
    
    bool isVerticleWin();
    bool isHorizontalWin();
    bool isDiagonalWin();
    void getUserInput();
    void addXOToCoordinate(int index);
    
};

#endif /* TwoPlayerGame_hpp */

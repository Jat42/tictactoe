//
//  GameManager.cpp
//  TicTacToe
//
//  Created by Jat42 on 15/01/23.
//

//#include <iostream>

#include "GameManager.hpp"
#include "TwoPlayerGame.hpp"

GameManager::GameManager(GameMode mode, GameLevel level) {
    gameMode = mode;
    gameLevel = level;
}

void GameManager::startGame() {
    
    if (gameMode == twoPlayer) {
        cout << "Game started\n";
        TwoPlayerGame game = TwoPlayerGame();
        game.start();
    } else {
        cout << "AI mode is comming soon\n";
    }
}

    


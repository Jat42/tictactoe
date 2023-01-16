//
//  GameManager.cpp
//  TicTacToe
//
//  Created by Jat42 on 15/01/23.
//

//#include <iostream>

#include "GameManager.hpp"

GameManager::GameManager(GameMode mode, GameLevel level) {
    gameMode = mode;
    gameLevel = level;
}

void GameManager::startGame() {
    cout << "Game started\n";
}

    


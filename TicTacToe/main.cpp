//
//  main.cpp
//  TicTacToe
//
//  Created by Jat42 on 15/01/23.
//

#include <iostream>
#include "main.h"
#include "GameHelper.h"


using namespace std;
using namespace GameModeEnum;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    GameMode gameMode = singlePlayer;
    GameLevel gameLevel = easy ;
    
    greetUser();
    
    gameMode = askGameOptions();

    if (gameMode == singlePlayer) {
        gameLevel = askGameLevel();
    }
    
    return 0;
}

void greetUser() {
    cout << "Hello, Welcome to tictoktoe.!\n\n";
}

GameMode askGameOptions() {
    char gameMode;
    
    cout << "Please choose game mode:\n";
    
    cout << "1) Single Player\n";
    cout << "2) Two Player\n\n";
    
    cin >> gameMode;
    
    while (gameMode != '1' && gameMode != '2') {
        cout << "\nPlease select option either 1 or 2\n\n";
        cin >> gameMode;
    }
    
    int gameModeInt = int(gameMode - '0') - 1;
    
    cout << "\nYou have selected game mode: " << GameModeEnum::modeName[gameModeInt] << "\n\n";
    
    GameMode mode = GameModeEnum::all[gameModeInt];
    
    return mode;
}

GameLevel askGameLevel() {
    char gameLevel;
    
    cout << "Please choose game level:\n";
    
    cout << "1) Easy\n";
    cout << "2) Medium\n";
    cout << "3) Hard\n\n";
    
    cin >> gameLevel;
    
    while (gameLevel != '1' && gameLevel != '2' && gameLevel != '3') {
        cout << "\nPlease select option either 1, 2 or 3\n\n";
        cin >> gameLevel;
    }
    
    int gameLevelInt = int(gameLevel - '0') - 1;
    
    cout << "\nYou have selected game level: " << GameLevelEnum::levelName[gameLevelInt] << "\n\n";
    
    GameLevel level = GameLevelEnum::all[gameLevelInt];
    
    return level;
}

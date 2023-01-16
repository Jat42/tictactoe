//
//  GameManager.hpp
//  TicTacToe
//
//  Created by Jat42 on 15/01/23.
//

#ifndef GameManager_hpp
#define GameManager_hpp

#include "GameHelper.hpp"

using namespace GameModeEnum;
using namespace GameLevelEnum;

class GameManager {

private:
    GameMode gameMode;
    GameLevel gameLevel;
    
public:
    GameManager(GameMode mode, GameLevel level);
    void startGame();
    


};

#endif /* GameManager_hpp */

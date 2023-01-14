//
//  GameHelper.h
//  TicTacToe
//
//  Created by Jat42 on 15/01/23.
//

#ifndef GameHelper_h
#define GameHelper_h

#include <iostream>

using namespace std;

namespace GameModeEnum {
    enum GameMode {
        singlePlayer,
        twoPlayer
    };
    
    static const GameMode all[] = { singlePlayer, twoPlayer };
    static const string modeName[] = { "Single Player", "Two Player" };
}
namespace GameLevelEnum {
    
    enum GameLevel {
        easy,
        medium,
        hard
    };
    
    static const GameLevel all[] = { easy, medium, hard };
    static const string levelName[] = { "Easy", "Medium", "Hard" };
}


#endif /* GameHelper_h */

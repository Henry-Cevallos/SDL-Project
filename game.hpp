//
//  game.hpp
//  TicTacToeGame
//
//  Created by Henry Cevallos on 11/2/19.
//  Copyright © 2019 Henry Cevallos. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

struct Graphics;

class Game
{
public:
    Game();
    ~Game();
    
private:
    void gameLoop();
    void draw(Graphics &graphics);
    void update(float elapsedTime);
};

#endif /* game_hpp */

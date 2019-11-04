//
//  input.hpp
//  TicTacToeGame
//
//  Created by Henry Cevallos on 11/2/19.
//  Copyright © 2019 Henry Cevallos. All rights reserved.
//

#ifndef input_hpp
#define input_hpp

#include <map>
#include <SDL2/SDL.h>

class Input
{
public:
    void beginNewFrame();
    void keyUpEvent(const SDL_Event& event);
    void keyDownEvent(const SDL_Event& event);
    
    bool wasKeyPressed(SDL_Scancode key);
    bool wasKeyReleased(SDL_Scancode key);
    bool isKeyHeld(SDL_Scancode key);
    
private:
    std::map<SDL_Scancode, bool> _heldKeys;
    std::map<SDL_Scancode, bool>_pressedKeys;
    std::map<SDL_Scancode, bool> _releasedKeys;
    
};

#endif /* input_hpp */

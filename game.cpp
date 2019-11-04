//
//  game.cpp
//  TicTacToeGame
//
//  Created by Henry Cevallos on 11/2/19.
//  Copyright © 2019 Henry Cevallos. All rights reserved.
//


#include <SDL2/SDL.h>
#include "graphics.hpp"
#include "game.hpp"
#include "input.hpp"

Game::Game()
{
    SDL_Init(SDL_INIT_EVERYTHING);
}

Game::~Game()
{
    
}

void Game::gameLoop()
{
    Graphics graphics;
    Input input;
    SDL_Event event;
    
    while(true)
    {
        if(SDL_PollEvent(&event))
        {
            if(event.type == SDL_KEYDOWN)
            {
                if(event.key.repeat == 0)
                    input.keyDownEvent(event);
            }
            
            else if(event.type == SDL_KEYUP)
                input.keyUpEvent(event);
            
            else if(event.type == SDL_QUIT)
                return;
            
        }
        
        if(input.wasKeyPressed(SDL_SCANCODE_ESCAPE) == true)
            return;
    }
}

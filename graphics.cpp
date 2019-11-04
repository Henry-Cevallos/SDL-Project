//
//  graphics.cpp
//  TicTacToeGame
//
//  Created by Henry Cevallos on 11/2/19.
//  Copyright © 2019 Henry Cevallos. All rights reserved.
//

#include "graphics.hpp"
#include "SDL2/SDL.h"

Graphics::Graphics()
{
    SDL_CreateWindowAndRenderer(640, 480, 0, &this->_window, &this->_renderer);
    SDL_SetWindowTitle(this->_window, "Tic-Tac-Toe");
}

Graphics::~Graphics()
{
    SDL_DestroyWindow(this->_window);
}

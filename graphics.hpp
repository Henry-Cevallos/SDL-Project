//
//  graphics.hpp
//  TicTacToeGame
//
//  Created by Henry Cevallos on 11/2/19.
//  Copyright © 2019 Henry Cevallos. All rights reserved.
//

#ifndef graphics_hpp
#define graphics_hpp

struct SDL_Window;
struct SDL_Renderer;

class Graphics
{
public:
    Graphics();
    ~Graphics();
    
private:
    SDL_Window* _window;
    SDL_Renderer* _renderer;
};

#endif /* graphics_hpp */

//
//  level.hpp
//  TicTacToeGame
//
//  Created by Henry Cevallos on 11/8/19.
//  Copyright © 2019 Henry Cevallos. All rights reserved.
//

#ifndef LEVEL_H
#define LEVEL_H

#include <string>

#include "globals.hpp"

class Graphics;
struct SDL_Texture;

class Level {
public:
    Level();
    Level(std::string mapName, Vector2 spawnPoint, Graphics &graphics);
    ~Level();
    void update(int elapsedTime);
    void draw(Graphics &graphics);

private:
    std::string _mapName;
    Vector2 _spawnPoint;
    Vector2 _size;
    SDL_Texture* _backgroundTexture;

    /* void loadMap
     * Loads a map
     */
    void loadMap(std::string mapName, Graphics &graphics);

};

#endif

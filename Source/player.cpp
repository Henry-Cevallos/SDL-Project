//
//  player.cpp
//  TicTacToeGame
//
//  Created by Henry Cevallos on 11/8/19.
//  Copyright © 2019 Henry Cevallos. All rights reserved.
//

#include "player.hpp"
#include "graphics.hpp"

namespace player_constants {
    const float WALK_SPEED = 0.2f;
}

Player::Player() {}

Player::Player(Graphics &graphics, float x, float y) :
    AnimatedSprite(graphics, "content/sprites/Xanimated.png", 0, 0, 40, 40, x, y, 100)
{
    graphics.loadImage("content/sprites/Xanimated.png");

    this->setupAnimations();
    this->playAnimation("RunRight");
}

void Player::setupAnimations() {
    this->addAnimation(1, 0, 0, "IdleLeft", 40, 50, Vector2(0,0));
    this->addAnimation(1, 0, 0, "IdleRight", 40, 50, Vector2(0,0));
    this->addAnimation(2, 0, 0, "RunLeft", 40, 50, Vector2(0,0));
    this->addAnimation(3, 0, 0, "RunRight", 40, 50, Vector2(0,0));
}

void Player::animationDone(std::string currentAnimation) {}

void Player::moveLeft() {
    this->_dx = -player_constants::WALK_SPEED;
    this->playAnimation("RunLeft");
    this->_facing = LEFT;
}

void Player::moveRight() {
    this->_dx = player_constants::WALK_SPEED;
    this->playAnimation("RunRight");
    this->_facing = RIGHT;
}

void Player::stopMoving() {
    this->_dx = 0.0f;
    this->playAnimation(this->_facing == RIGHT ? "IdleRight" : "IdleLeft");
}

void Player::update(float elapsedTime) {
    //Move by dx
    this->_x += this->_dx * elapsedTime;

    AnimatedSprite::update(elapsedTime);
}

void Player::draw(Graphics &graphics) {
    AnimatedSprite::draw(graphics, this->_x, this->_y);
}

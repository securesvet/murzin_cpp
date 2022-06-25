//
// Created by mursv on 6/25/2022.
//

#include "Player.h"

Player::Player() {
}

float Player::getPosX() {
    return posX;
}

float Player::getPosY() {
    return posY;
}

float Player::getSpeed() {
    return speed;
}

float Player::getWidth() {
    return width;
}

float Player::getHeight() {
    return height;
}

// Функции для изменения значений приватных переменных
void Player::setPosX(float inputX) {
    posX = inputX;
}

void Player::setPosY(float inputY) {
    posY = inputY;
}

void Player::setSpeed(float inputSpeed) {
    speed = inputSpeed;
}

void Player::setWidth(float inputWidth) {
    width = inputWidth;
}

void Player::setHeight(float inputHeight) {
    height = inputHeight;
}

// Рисует игрока
void Player::Draw() {
    DrawRectangle(posX - width / 2, posY - height / 2, 10, 100, GREEN);
}
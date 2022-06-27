//
// Created by mursv on 6/25/2022.
//

#include "Ball.h"

Ball::Ball() {
}
// Функции для получения значений переменных
float Ball::getPosX() {
    return posX;
}
float Ball::getPosY() {
    return posY;
}
float Ball::getSpeedX() {
    return speedX;
}
float Ball::getSpeedY() {
    return speedY;
}
float Ball::getRadius() {
    return radius;
}
// Функции для изменения значений приватных переменных
void Ball::setPosX(float inputPosX) {
    posX = inputPosX;
}
void Ball::setPosY(float inputPosY) {
    posY = inputPosY;
}
void Ball::setSpeedX(float inputSpeedX) {
    speedX = inputSpeedX;
}
void Ball::setSpeedY(float inputSpeedY) {
    speedY = inputSpeedY;
}
void Ball::setRadius(float inputRadius) {
    radius = inputRadius;
}
// Функция, рисующая шарик
void Ball::Draw() {
    DrawCircle((int) posX, (int) posY, (int) radius, GREEN);
}
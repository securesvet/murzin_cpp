//
// Created by mursv on 6/25/2022.
//

#ifndef EXAMPLE_BALL_H
#define EXAMPLE_BALL_H
#include "raylib.h"

class Ball {
private:
    float posX, posY; // Координаты шарика
    float speedX, speedY; // Скорость шарика, разные скорости => будет лететь под другим углом arctg(X/Y)
    float radius;  // Радиус шарика

public:
    Ball();

    // Функции для получения значений переменных
    float getPosX();

    float getPosY();

    float getSpeedX();

    float getSpeedY();

    float getRadius();

    // Функции для изменения значений приватных переменных
    void setPosX(float);

    void setPosY(float);

    void setSpeedX(float);

    void setSpeedY(float);

    void setRadius(float);

    // Функция, рисующая шарик
    void Draw();
};


#endif //EXAMPLE_BALL_H

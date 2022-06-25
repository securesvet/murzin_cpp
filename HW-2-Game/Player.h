//
// Created by mursv on 6/25/2022.
//

#ifndef EXAMPLE_PLAYER_H
#define EXAMPLE_PLAYER_H
#include "raylib.h"

// Класс игрок (в нашем случае платформа - игрок)
class Player {
private:
    float posX, posY;
    float speed;
    float width, height;
public:
    Player();

    // Функции для получения значений переменных
    float getPosX();

    float getPosY();

    float getSpeed();

    float getWidth();

    float getHeight();

    // Функции для изменения значений приватных переменных
    void setPosX(float);

    void setPosY(float);

    void setSpeed(float);

    void setWidth(float);

    void setHeight(float);

    // Рисует игрока
    void Draw();
};


#endif //EXAMPLE_PLAYER_H

#include "Ball.h"
#include "Player.h"

int main() {
    InitWindow(800, 600, "Pong"); // Вызывает окно
    SetWindowState(
            FLAG_VSYNC_HINT); // Берёт частоту обновления монитора и делает фпс ~ таким же (ограничивает его при 60 гц до 60 фпс, при 144 гц до 144 фпс)

    Ball ball;
    // Координаты шарика, которым играют в пинг-понг
    ball.setPosX(GetScreenWidth() / 2.0f);
    ball.setPosY(GetScreenHeight() / 2.0f);
    // Радиус шарика
    ball.setRadius(10);
    // Скорость шарика, разные скорости => будет лететь под другим углом arctg(X/Y)
    ball.setSpeedX(300);
    ball.setSpeedY(300);
    // Игрок слева
    Player leftPlayer;
    leftPlayer.setPosX(50);
    leftPlayer.setPosY(GetScreenHeight() / 2);
    leftPlayer.setWidth(10);
    leftPlayer.setHeight(100);
    leftPlayer.setSpeed(500);

    // Игрока справа
    Player rightPlayer;
    rightPlayer.setPosX(GetScreenWidth() - 50);
    rightPlayer.setPosY(GetScreenHeight() / 2);
    rightPlayer.setWidth(10);
    rightPlayer.setHeight(100);
    rightPlayer.setSpeed(500);

    const char* winnerText = nullptr;
    const char* restartText = "PRESS R TO RESTART";
    // Пока окно открыто
    while (!WindowShouldClose()) {
        // Передвижение шарика с каждым фреймом
        ball.setPosX(ball.getPosX() + ball.getSpeedX() * GetFrameTime());
        ball.setPosY(ball.getPosY() + ball.getSpeedY() * GetFrameTime());
        // COLLISION Шарика
        if (ball.getPosY() < 0) {
            ball.setPosY(0); // Не даёт выйти за пределы окна  в случае, если координата ballY меньше нуля
            ball.setSpeedY(ball.getSpeedY() *
                           -1); // По сути делает скорость отрицательной и направляет шарик в противоположную сторону
        }

        if (ball.getPosY() > GetScreenHeight()) {
            ball.setPosY(GetScreenHeight());
            ball.setSpeedY(ball.getSpeedY() * -1);
        }
        // COLLISION игроков
        // Игрока слева
        if (CheckCollisionCircleRec(Vector2{ball.getPosX(), ball.getPosY()}, ball.getRadius(),
                                    leftPlayer.getRectangle())) {
            if (ball.getSpeedX() < 0) {
                ball.setSpeedX(
                        ball.getSpeedX() * -1.1f); // Увеличение скорости со временем, шарик летит в другую сторону
                ball.setSpeedY((ball.getPosY() - leftPlayer.getPosY()) / (leftPlayer.getHeight() / 2) * (-ball.getSpeedX()));
            }
        }
        // Игрока справа
        if (CheckCollisionCircleRec(Vector2{ball.getPosX(), ball.getPosY()}, ball.getRadius(),
                                    rightPlayer.getRectangle())) {
            if (ball.getSpeedX() > 0) {
                ball.setSpeedX(ball.getSpeedX() * -1);
                ball.setSpeedY((ball.getPosY() - leftPlayer.getPosY()) / (leftPlayer.getHeight() / 2) * (-ball.getSpeedX()));
            }
        }
        // Перемещение игроков
        if (IsKeyDown(KEY_W)) {
            leftPlayer.setPosY(leftPlayer.getPosY() - leftPlayer.getSpeed() * GetFrameTime());
        }
        if (IsKeyDown(KEY_S)) {
            leftPlayer.setPosY(leftPlayer.getSpeed() * GetFrameTime() + leftPlayer.getPosY());
        }
        if (IsKeyDown(KEY_UP)) {
            rightPlayer.setPosY(rightPlayer.getPosY() - rightPlayer.getSpeed() * GetFrameTime());
        }
        if (IsKeyDown(KEY_DOWN)) {
            rightPlayer.setPosY(rightPlayer.getPosY() + rightPlayer.getSpeed() * GetFrameTime());
        }
        // WIN-LOSE система
        if (ball.getPosX() < 0) {
            winnerText = "PLAYER RIGHT WINS";
        }
        if (ball.getPosX() > GetScreenWidth()) {
            winnerText = "PLAYER LEFT WINS";
        }
        BeginDrawing();
        ClearBackground(BLACK);

        ball.Draw();
        leftPlayer.Draw();
        rightPlayer.Draw();
        if (winnerText) {
            int textWidth = MeasureText(winnerText, 50);
            DrawText(winnerText, GetScreenWidth() / 2 - textWidth / 2, GetScreenHeight() / 2 - 30, 50, YELLOW);
            DrawText(restartText, GetScreenWidth() / 2 - textWidth / 2, GetScreenHeight() / 2 + 10, 30, YELLOW);
        }
        // Перезапуск игры
        if (winnerText && IsKeyPressed(KEY_R)) {
            ball.setPosX(GetScreenWidth() / 2.0f);
            ball.setPosY(GetScreenHeight() / 2.0f);
            ball.setSpeedX(300);
            ball.setSpeedY(300);
            winnerText = nullptr;
        }
        DrawFPS(10, 10);
        EndDrawing();
    }
    return 0;
}
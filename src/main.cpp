#include "grid.hpp"
#include <iostream>
#include <raylib.h>

int main(void) {
    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 450;
    int FPS = 12;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Raylib Roguelike Game");
    SetTargetFPS(FPS);

    Game::Grid grid{WINDOW_WIDTH, WINDOW_HEIGHT, 50};
    grid.set(1, 1, 1);
    while (!WindowShouldClose()) {
        // Drawing
        BeginDrawing();
        ClearBackground(RAYWHITE);
        grid.draw();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
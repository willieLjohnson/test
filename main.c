#include "raylib.h"

int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Test - Main Window");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("M A I N", 380, 400, 40, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

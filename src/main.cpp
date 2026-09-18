#include <iostream>

#include "raylib.h"

#include "./Entities/Player.hpp"
#include "./Entities/Zombie.hpp"
#include "./Items/Weapon.hpp"
#include "./Items/Inventory.hpp"

int main(){
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "OUTBREAK ZERO - LogicGate Studio");

    SetTargetFPS(60);

    // 2. Inisialisasi Objek Game
    Player player("Greg");
    Zombie zombie = Zombie("Zombie", "Normal", 100, 10);

    // 3. Game Loop Utama
    while (!WindowShouldClose()) { // Berhenti jika tombol CLOSE ditekan
        // --- A. UPDATE LOGIC ---
        // Contoh Input Tombol
        if (IsKeyPressed(KEY_SPACE)) {
            player.attack(zombie);
        }
        if (IsKeyPressed(KEY_B)) {
            player.healBleeding();
        }

        // --- B. DRAWING / GRAPHICS RENDERING ---
        BeginDrawing();
            ClearBackground(RAYWHITE); // Bersihkan layar dengan warna putih

            // Judul Game
            DrawText("OUTBREAK ZERO", 20, 20, 30, DARKGRAY);
            DrawText("Tekan [SPACE] untuk Menyerang, [B] untuk Obati Pendarahan", 20, 60, 16, GRAY);

            // Visualisasi Player (Kotak Hijau & Bar Darah)
            DrawRectangle(100, 250, 100, 100, GREEN);
            DrawText(player.getName().c_str(), 100, 220, 20, BLACK);
            // Draw HP Bar Player
            DrawRectangle(100, 360, player.getHp(), 15, RED);
            DrawRectangleLines(100, 360, 100, 15, BLACK);
            std::string playerHpText = "HP: " + std::to_string(player.getHp());
            DrawText(playerHpText.c_str(), 100, 380, 16, DARKGRAY);

            // Visualisasi Zombie (Kotak Merah & Bar Darah)
            if (zombie.getAlive()) {
                DrawRectangle(600, 250, 100, 100, MAROON);
                DrawText(zombie.getType().c_str(), 600, 220, 20, BLACK);
                // Draw HP Bar Zombie
                DrawRectangle(600, 360, zombie.getHp(), 15, RED);
                DrawRectangleLines(600, 360, 100, 15, BLACK);
                std::string zombieHpText = "HP: " + std::to_string(zombie.getHp());
                DrawText(zombieHpText.c_str(), 600, 380, 16, DARKGRAY);
            } else {
                DrawText("ZOMBIE TEWAS!", 580, 290, 20, GRAY);
            }

        EndDrawing();
    }

    // 4. Tutup Window saat Game Selesai
    CloseWindow();


    std::cin.get();
    return 0;
}
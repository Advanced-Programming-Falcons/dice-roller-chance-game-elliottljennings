#include <raylib.h>
#include <string>
#include <ctime>
#include "dice.h"

using namespace std;

int main(void){

    die thedie(6);

    const int screenWidth = 1600;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "deez");
    string message = "press space to roll the dice";
    Texture2D deeznuts = LoadTexture("dice0.png");
    Texture2D one = LoadTexture("dice1.png");
    Texture2D two = LoadTexture("dice2.png");
    Texture2D three = LoadTexture("dice3.png");
    Texture2D four = LoadTexture("dice4.png");
    Texture2D five = LoadTexture("dice5.png");
    Texture2D six = LoadTexture("dice6.png");
    DrawTexture(deeznuts, 100, 100, WHITE);
    while(!WindowShouldClose()){


        if (IsKeyPressed(KEY_SPACE)){
            int side = thedie.roll();
            message = "you rolled le " + std::to_string(side) + "! Good jerb!";
            if (side == 1){
                DrawTexture(one, 100, 100, WHITE);
            }
            if(side == 2){
                DrawTexture(two, 100, 100, WHITE);
            }
            if(side == 3){
                DrawTexture(three, 100, 100, WHITE);
            }
            if(side == 4){
                DrawTexture(four, 100, 100, WHITE);
            }
            if(side == 5){
                DrawTexture(five, 100, 100, WHITE);
            }
            if(side == 6){
                DrawTexture(six, 100, 100, WHITE);
            }

        }
        BeginDrawing();
        ClearBackground(RED);

        DrawText(message.c_str(), screenWidth/2, screenHeight/2,40,WHITE);
        EndDrawing();

    }
    CloseWindow();
    return 0;
}
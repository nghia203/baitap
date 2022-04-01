#include<SDL.h>
#include<iostream>
class Gameloop
{
private:
    const int WIDTH = 640;
    const int HEIGHT = 480;
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event event1;
    bool GameState;
public:
    Gameloop();
    void Initialize();
    void Event();
    void Render();
    void Clear();
    bool GetGameState();
};

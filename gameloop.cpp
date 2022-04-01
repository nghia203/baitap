#include"gameloop.h"


Gameloop::Gameloop()
{
    window = NULL;
    renderer = NULL;
    GameState = false;
}

bool Gameloop::GetGameState()
{
    return GameState;
}

void Gameloop::Initialize()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    window = SDL_CreateWindow("Shooter", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_RESIZABLE);
    if (window)
    {
        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer)
        {
            std::cout << "succeed" << std::endl;
            GameState = true;
        }
        else
        {
             std::cout << "render failed" << std::endl;
        }
    }
    else
    {
        std::cout << "Window failed" << std::endl;

    }
}

void Gameloop::Event()
{
    SDL_PollEvent(&event1);
    if (event1.type == SDL_QUIT)
        {
            GameState = false;
        }
    if (event1.type == SDL_KEYDOWN)
    {
        if (event1.key.keysym.sym == SDLK_ESCAPE)
        {
            GameState = false;
        }
        else
        {
            GameState = true;
        }
    }
}
void Gameloop::Render()
{
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}

void Gameloop::Clear()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}

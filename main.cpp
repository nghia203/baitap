#include<SDL.h>
#include<SDL_image.h>
#include"gameloop.h"

Gameloop* g = new Gameloop();

int main(int argc, char** argv)
{
    g->Initialize();
    while(g->GetGameState())
    {
        g->Render();
        g->Event();
    }
    g->Clear();

    return 0;
}

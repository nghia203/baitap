
#include"gameloop.h"
#include<SDL_image.h>

class TextureManager
{
public:
    static SDL_Texture* Texture(const char* filelocation, SDL_Renderer* ren);
};


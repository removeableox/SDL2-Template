#ifndef ENTITY_H
#define ENTITY_H

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include <vector>

class Entity
{
public:
    float x, y;
    int w, h;
    int angle = 0;
    SDL_Texture *texture;

    Entity(float x, float y, int w, int h, SDL_Texture *tex);
    bool isColliding(Entity entity);
};

#endif // ENTITY_H
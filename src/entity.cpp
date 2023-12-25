#include "entity.h"
#include <random>
#include <iostream>

Entity::Entity(float x, float y, int w, int h, SDL_Texture *tex)
{
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
    texture = tex;
}
bool Entity::isColliding(Entity entity)
{
    if (
        x < entity.x + entity.w &&
        x + w > entity.x &&
        y < entity.y + entity.h &&
        y + h > entity.y)
    {
        return true;
    }
    return false;
}
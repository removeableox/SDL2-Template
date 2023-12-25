#include "renderwindow.h"
#include <iostream>

void RenderWindow::create(std::string title, int width, int height)
{
    window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}
void RenderWindow::clear()
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
}
SDL_Texture *RenderWindow::loadTexture(std::string path)
{
    SDL_Texture *texture;
    texture = IMG_LoadTexture(renderer, path.c_str());
    return texture;
}
void RenderWindow::render(Entity &entity)
{
    SDL_Rect destinationRect = {(int)entity.x, (int)entity.y, entity.w, entity.h};
    SDL_RenderCopyEx(renderer, entity.texture, NULL, &destinationRect, entity.angle, NULL, SDL_FLIP_NONE);
}
void RenderWindow::display()
{
    SDL_RenderPresent(renderer);
}
void RenderWindow::cleanUp()
{
    SDL_DestroyWindow(window);
}

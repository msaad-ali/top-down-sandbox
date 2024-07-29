#include "../include/Entity.hpp"

Entity::Entity(int xpos, int ypos)
{
    rect.x = xpos;
    rect.y = ypos;
    rect.w = rect.h = 10;
}

Entity::~Entity()
{
}

void Entity::handleEvents()
{
}

void Entity::update()
{
    rect.x++;
}

void Entity::render(SDL_Renderer* renderer)
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect);
}

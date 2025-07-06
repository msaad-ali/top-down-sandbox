#include "../include/Enemy.hpp"

Enemy::Enemy(int xpos, int ypos)
{
    rect.x = xpos;
    rect.y = ypos;
    rect.w = rect.h = 10;
}

Enemy::~Enemy()
{
}

void Enemy::handleEvents(SDL_Event *event)
{
}

void Enemy::update()
{
}

void Enemy::render(SDL_Renderer *renderer)
{
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect);
}

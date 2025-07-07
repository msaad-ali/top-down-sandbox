#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Entity
{
    protected:
        int xpos;
        int ypos;

        int health;
        int damage;

        SDL_Rect rect;

    public:
        Entity(){};
        Entity(int xpos, int ypos);
        Entity(int xpos, int ypos, int health, int damage);
        ~Entity();

        virtual void handleEvents(SDL_Event* event){};
        virtual void update(){};
        virtual void render(SDL_Renderer* renderer){};

        virtual void takeDamage (Entity *entity);
};
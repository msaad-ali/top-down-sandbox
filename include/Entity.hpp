#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Entity
{
    protected:
        int xpos;
        int ypos;

        SDL_Rect rect;

    public:
        Entity(){};
        Entity(int xpos, int ypos);
        ~Entity();

        virtual void handleEvents(SDL_Event* event){};
        virtual void update(){};
        virtual void render(SDL_Renderer* renderer){};
};
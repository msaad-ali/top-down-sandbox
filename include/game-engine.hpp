#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "EntityManager.hpp"
#include "Player.hpp"
#include "Enemy.hpp"

class GameEngine
{
    private:
        // screen diemensions
        int SCREEN_WIDTH;
        int SCREEN_HEIGHT;

        bool isRunning;

        SDL_Window* window;
        SDL_Renderer* renderer;

        EntityManager* entityManager;

    public:
        GameEngine(int screen_width, int screen_height);
        ~GameEngine();
        void initialize();
        bool loadMedia();
        void free();

        bool running();

        void handleEvents();
        void update();
        void render();
};
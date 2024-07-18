#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class GameEngine
{
    private:
        // screen diemensions
        int SCREEN_WIDTH;
        int SCREEN_HEIGHT;

        bool isRunning;

        SDL_Window* window;
        SDL_Renderer* renderer;

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
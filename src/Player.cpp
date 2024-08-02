#include "../include/Player.hpp"

Player::Player(int xpos, int ypos)
{
    rect.x = xpos;
    rect.y = ypos;
    rect.w = rect.h = 10;
}

Player::~Player()
{
}

void Player::handleEvents(SDL_Event* event)
{
    switch (event->key.keysym.sym)
	{
		case SDLK_UP:
			xpos += 10;
			break;
        
        case SDLK_DOWN:
			xpos -= 10;
			break;
		
		default:
			break;
	}
}

void Player::update()
{
    rect.x = xpos;
    rect.y = ypos;
}

void Player::render(SDL_Renderer *renderer)
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect);
}

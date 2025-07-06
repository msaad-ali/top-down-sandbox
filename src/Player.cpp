#include "../include/Player.hpp"

Player::~Player()
{
}

void Player::handleEvents(SDL_Event* event)
{
    switch (event->key.keysym.sym)
	{
		case SDLK_UP:
			ypos -= 10;
			break;
        
        case SDLK_DOWN:
			ypos += 10;
			break;

        case SDLK_RIGHT:
            xpos += 10;
            break;

        case SDLK_LEFT:
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

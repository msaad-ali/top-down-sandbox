#include "../include/EntityManager.hpp"

EntityManager::EntityManager()
{
}

EntityManager::~EntityManager()
{
}

std::vector<std::unique_ptr<Entity>>& EntityManager::returnVector()
{
    return entities;
}

void EntityManager::handleEvents(SDL_Event* event)
{
    for ( long unsigned int i = 0; i < entities.size(); i++ )
	{
		entities[i]->handleEvents(event);
	}
}

void EntityManager::update()
{
    for ( long unsigned int i = 0; i < entities.size(); i++ )
	{
		entities[i]->update();
	}
}

void EntityManager::render(SDL_Renderer *renderer)
{
    for ( long unsigned int i = 0; i < entities.size(); i++ )
	{
		entities[i]->render(renderer);
	}
}

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

void EntityManager::handleEvents()
{
}

void EntityManager::update()
{
}

void EntityManager::render(SDL_Renderer *renderer)
{
}

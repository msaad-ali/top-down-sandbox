#include "../include/Entity.hpp"

Entity::Entity(int xpos, int ypos)
{
    rect.x = xpos;
    rect.y = ypos;
    rect.w = rect.h = 10;
}

Entity::Entity(int xpos, int ypos, int health, int damage)
{
    // Entity(xpos, ypos);
    rect.x = xpos;
    rect.y = ypos;
    rect.w = rect.h = 10;
    this->health = health;
    this->damage = damage;
}

Entity::~Entity()
{
}

void Entity::takeDamage(Entity *entity)
{
    health -= entity->damage;
}
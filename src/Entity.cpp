#include "../include/Entity.hpp"

Entity::Entity(int xpos, int ypos)
{
    rect.x = xpos;
    rect.y = ypos;
    rect.w = rect.h = 10;
}

Entity::~Entity()
{
}
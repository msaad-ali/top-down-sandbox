#include "Entity.hpp"

class Enemy : public Entity
{
    protected:
        

    public:
        Enemy(int xpos, int ypos) : Entity(xpos, ypos) {}
        Enemy(int xpos, int ypos, int health, int damage) : Entity( xpos, ypos, health, damage) {}
        ~Enemy();

        virtual void handleEvents(SDL_Event* event) override;
        virtual void update() override;
        virtual void render(SDL_Renderer* renderer) override;
};
#include "Entity.hpp"

class Enemy : public Entity
{
    protected:
        int health;

    public:
        Enemy(int xpos, int ypos) : Entity(xpos, ypos) {}
        ~Enemy();

        virtual void handleEvents(SDL_Event* event) override;
        virtual void update() override;
        virtual void render(SDL_Renderer* renderer) override;
};
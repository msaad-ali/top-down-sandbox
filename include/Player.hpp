#include "Entity.hpp"

class Player : public Entity
{
    protected:
        

    public:
        Player(int xpos, int ypos) : Entity(xpos, ypos) {}
        Player(int xpos, int ypos, int health, int damage) : Entity( xpos, ypos, health, damage) {}
        ~Player();

        virtual void handleEvents(SDL_Event* event) override;
        virtual void update() override;
        virtual void render(SDL_Renderer* renderer) override;
};
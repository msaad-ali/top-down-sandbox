#include "Entity.hpp"

class Player : public Entity
{
    protected:
        int health;

    public:
        Player(int xpos, int ypos);
        ~Player();

        virtual void handleEvents(SDL_Event* event) override;
        virtual void update() override;
        virtual void render(SDL_Renderer* renderer) override;
};
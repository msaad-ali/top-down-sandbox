#include <vector>
#include <memory>

#include "Entity.hpp"

class EntityManager
{
    private:
        std::vector<std::unique_ptr<Entity>> entities;

    public:
        EntityManager();
        ~EntityManager();

        std::vector<std::unique_ptr<Entity>>& returnVector();

        void handleEvents(SDL_Event* event);
        void update();
        void render(SDL_Renderer* renderer);
};
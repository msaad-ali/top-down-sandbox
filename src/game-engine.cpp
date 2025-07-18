#include "../include/game-engine.hpp"

GameEngine::GameEngine(int screen_width, int screen_height)
{
    SCREEN_WIDTH = screen_width;
    SCREEN_HEIGHT = screen_height;

	entityManager = new EntityManager();

	// add entities into the entityManager
	// entityManager->returnVector().push_back(std::make_unique<Entity>(10, 10));
	entityManager->returnVector().push_back(std::make_unique<Player>(20, 50, 100, 50));
	entityManager->returnVector().push_back(std::make_unique<Enemy>(20, 100, 100, 50));
}

GameEngine::~GameEngine()
{
    free();
}

void GameEngine::initialize()
{
    isRunning = true;

    //Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
		isRunning = false;
	}
    else
    {
        //Set texture filtering to linear
		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
		{
			printf( "Warning: Linear texture filtering not enabled!" );
		}

        // Create window
        window = SDL_CreateWindow( "Top Down Sandbox", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if ( window == NULL )
        {
            printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
			isRunning = false;
        }
        else
        {
            // Create renderer for the window
			renderer = SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED );
            if( renderer == NULL )
			{
				printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
				isRunning = false;
			}

            else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor( renderer, 0xFF, 0xFF, 0xFF, 0xFF );

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if( !( IMG_Init( imgFlags ) & imgFlags ) )
				{
					printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
					isRunning = false;
				}
			}
        }
    }
}

bool GameEngine::loadMedia()
{
    return isRunning;
}

void GameEngine::free()
{
	// delete the entityManager pointer
	delete entityManager;

    //Destroy window and renderer
	SDL_DestroyRenderer( renderer );
	SDL_DestroyWindow( window );
	window = NULL;
	renderer = NULL;

	//Quit SDL subsystems
	IMG_Quit();
	SDL_Quit();
}

bool GameEngine::running()
{
    return isRunning;
}

void GameEngine::handleEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);

	// check if quit is selected
	if (event.type == SDL_QUIT)
	{
		isRunning = false;
	}

	// handle events for all the entities
	entityManager->handleEvents(&event);
}

void GameEngine::update()
{
	// update all the entities
	entityManager->update();
}

void GameEngine::render()
{
	// clear screen
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderClear(renderer);

	// render all the entities
	entityManager->render(renderer);

	SDL_RenderPresent(renderer);
}

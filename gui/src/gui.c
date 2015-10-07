#include "gui.h"
PLAYING_WINDOW the_game;
void oslobodi(PLAYING_WINDOW* the_game)
{

	SDL_FreeSurface( the_game->gBackground );
	the_game->gBackground = NULL;
    SDL_FreeSurface( the_game->gHole );
	the_game->gHole = NULL;
    SDL_FreeSurface( the_game->gBall );
	the_game->gBall = NULL;

	SDL_DestroyWindow( the_game->gWindow );
	the_game->gWindow = NULL;

	SDL_Quit();
}
bool loadMedia(PLAYING_WINDOW* the_game)
{
	bool success = true;
	the_game->gPlayer = NULL;
	the_game->gCongratulations = SDL_LoadBMP("resources/congratulations.bmp");
	the_game->gBackground = SDL_LoadBMP( "resources/green.bmp" );
    the_game->gBall = SDL_LoadBMP( "resources/golf_ball.bmp");
    the_game->gHole = SDL_LoadBMP( "resources/hole.bmp");

	Uint32 colorkey = SDL_MapRGB( the_game->gHole -> format, 150, 150, 150);
	SDL_SetColorKey(the_game->gHole, SDL_TRUE, colorkey);
	if( the_game->gBackground == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../resources/green.bmp", SDL_GetError() );
		success = false;
	}
    if( the_game->gHole == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../resources/hole.bmp", SDL_GetError() );
		success = false;
	}
    if( the_game->gBall == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../resources/ball.bmp", SDL_GetError() );
		success = false;
	}
	return success;
}

bool initGui(PLAYING_WINDOW* the_game)
{

	bool success = true;

	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		the_game->gWindow = SDL_CreateWindow( "Mini Golf by Slimpa", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( the_game->gWindow == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{

			the_game->gScreenSurface = SDL_GetWindowSurface( the_game->gWindow );
		}

	}

	return success;
}

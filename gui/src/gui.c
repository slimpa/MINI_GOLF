#include "gui.h"

/*void free()
{

	SDL_FreeSurface( gBackground );
	gBackground = NULL;
    SDL_FreeSurface( gHole );
	gHole = NULL;
    SDL_FreeSurface( gBall );
	gBall = NULL;

	SDL_DestroyWindow( gWindow );
	gWindow = NULL;

	SDL_Quit();
}*/
bool loadMedia()
{
	/*bool success = true;

	gBackground = SDL_LoadBMP( "../resources/green.bmp" );
    gBall = SDL_LoadBMP( "../resources/ball.bmp");
    gHole = SDL_LoadBMP( "../resources/hole.bmp");
	if( gBackground == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../resources/green.bmp", SDL_GetError() );
		success = false;
	}
    if( gHole == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../resources/hole.bmp", SDL_GetError() );
		success = false;
	}
    if( gBall == NULL )
	{
		printf( "Unable to load image %s! SDL Error: %s\n", "../resources/ball.bmp", SDL_GetError() );
		success = false;
	}
	return success;*/
}

bool initGui(PLAYING_WINDOW* the_game)
{
/*
	bool success = true;

	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{

		gWindow = SDL_CreateWindow( "Mini Golf by Slimpa", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( gWindow == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{

			gScreenSurface = SDL_GetWindowSurface( gWindow );
		}
	}

	return success;*/
}

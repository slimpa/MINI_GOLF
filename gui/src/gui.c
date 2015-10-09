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
	the_game->gBackground = SDL_LoadBMP( "resources/background.bmp" );
    the_game->gBall = SDL_LoadBMP( "resources/golf_ball1.bmp");
    the_game->gHole = SDL_LoadBMP( "resources/hole.bmp");

	Uint32 colorkey = SDL_MapRGB( the_game->gHole -> format, 150, 150, 150);
	SDL_SetColorKey(the_game->gHole, SDL_FALSE, colorkey);
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
bool mouseEvents(SDL_Surface* the_ball)
{
	SDL_Rect rect;
	bool running = true;
	Uint32 start;
	int x;
	int y;
	rect.x = 50;
	rect.y = 240;
	rect.w = 30;
	rect.h = 30;
	Uint32 color2 = SDL_MapRGB(the_ball->format, 0xff,0xff,0xff);
	Uint32 color = SDL_MapRGB(the_ball->format, 0,0,0);
	while(running) {
		start = SDL_GetTicks();
		SDL_Event event;
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
			case SDL_MOUSEMOTION:
				x=event.motion.x;
				y=event.motion.y;
				if(x>rect.x && x<rect.x+rect.w && y>rect.y && y<rect.y+rect.h)
				{
					printf("over\n");
				}
				else
				{
					printf("notover\n");
				}

			case SDL_MOUSEBUTTONDOWN:
				x = event.button.x;
				y = event.button.y;
				if(x>rect.x && x<rect.x+rect.w && y>rect.y && y<rect.y+rect.h && event.button.button==SDL_BUTTON_LEFT)
				{
					printf("down\n");
				}

			case SDL_MOUSEBUTTONUP:
				x = event.button.x;
				y = event.button.y;
				if(x>rect.x && x<rect.x+rect.w && y>rect.y && y<rect.y+rect.h && event.button.button==SDL_BUTTON_LEFT)
				{
					printf("up\n");
					return true;
				}

							}
			}

			SDL_FillRect(the_ball, &rect, color);
		}
}

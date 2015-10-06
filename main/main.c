#include "main.h"

int main( int argc, char* args[] )
{
    PLAYING_WINDOW* game = (PLAYING_WINDOW*) malloc( sizeof(PLAYING_WINDOW) );
    PLAYER* player;
    char* name= malloc( sizeof(char) * MAX_NAME_LENGTH );
    player=playerCreate();
    printf("Unesite ime igraca: ");
    scanf("%s",name);
    assignPlayerName(player,name);
    SDL_Rect hole;
    SDL_Rect ball;
    hole.x = 500;
    hole.y = 240;
    ball.x = 50;
    ball.y = 240;
    int i;

	if( !initGui(game) )
	{
		printf( "Failed to initialize!\n" );
	}
	if( !loadMedia(game) )
	{
		printf( "Failed to load media!\n" );
	}
	else
	{

		SDL_BlitSurface( game->gBackground, NULL, game->gScreenSurface, NULL );
        SDL_BlitSurface( game->gHole, NULL, game->gScreenSurface, &hole);
        SDL_BlitSurface( game->gBall, NULL, game->gScreenSurface, &ball );

        for(i = 50;i < 500;i++)
        {
            SDL_BlitSurface( game->gBall, NULL, game->gScreenSurface, &ball );
            SDL_UpdateWindowSurface( game->gWindow );
            ball = ball_move(ball);
            if(isBallInHole(ball,hole))
            SDL_BlitSurface( game->gCongratulations, NULL, game->gScreenSurface, NULL);
            SDL_Delay (20);
        }
        SDL_UpdateWindowSurface( game->gWindow );


		SDL_Delay( 2000 );
	}

	//oslobodi(game);

	return 0;
}

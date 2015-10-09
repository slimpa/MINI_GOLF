#ifndef _GUI_H
#define _GUI_H
#include <stdio.h>
#include <stdbool.h>
#include <SDL.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

typedef struct playing_window
{


    SDL_Window* gWindow;
    SDL_Surface* gScreenSurface;
    SDL_Surface* gBackground;
    SDL_Surface* gHole;
    SDL_Surface* gBall;
    SDL_Surface* gCongratulations;
    SDL_Surface* gPlayer;

} PLAYING_WINDOW;

bool mouseEvents(SDL_Surface* the_ball);
bool initGui(PLAYING_WINDOW* the_game);
void oslobodi(PLAYING_WINDOW* the_game);
bool loadMedia(PLAYING_WINDOW* the_game);

#endif

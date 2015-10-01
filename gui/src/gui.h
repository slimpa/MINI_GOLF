#ifndef _GUI_H
#define _GUI_H
#include <stdio.h>
#include <stdbool.h>
#include <SDL.h>


typedef struct playing_window
{

    int SCREEN_WIDTH;
    int SCREEN_HEIGHT;

    SDL_Window* gWindow ;


    SDL_Surface* gScreenSurface;


    SDL_Surface* gBackground;
    SDL_Surface* gHole;
    SDL_Surface* gBall;
} PLAYING_WINDOW;


bool initGui();
//void free();
bool loadMedia();

#endif

#ifndef _BALL_MOVEMENT_H
#define _BALL_MOVEMENT_H
#include <stdio.h>
#include <SDL.h>
#include <stdbool.h>


SDL_Rect ballMove(SDL_Rect current_position);
bool isBallInHole(SDL_Rect current_position, SDL_Rect hole_position);

#endif

#include "ball_movement.h"

SDL_Rect ball_move(SDL_Rect current_position)
{
    SDL_Rect temp;
    temp.x = current_position.x + 1;
    temp.y = current_position.y;
    return temp;
}

bool isBallInHole(SDL_Rect current_position, SDL_Rect hole_position)
{
    if(current_position.x == hole_position.x && current_position.y == hole_position.y)
    return true;
    else
    return false;
}

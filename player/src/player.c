#include "player.h"

PLAYER* playerCreate(void)
{
    PLAYER* player = (PLAYER*) malloc( sizeof(PLAYER) );
    return player;
}

void assignPlayerName(PLAYER* player, char *name)
{
    if(strlen(name) > 10)
    {
        name="Player";
        strcpy(player->name, name);
    }
    else
    {
        strcpy(player->name, name);
    }

}

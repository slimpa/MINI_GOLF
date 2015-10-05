#include "player.h"

PLAYER* playerCreate(void)
{
    PLAYER* player = (PLAYER*) malloc( sizeof(PLAYER) );
    //assignPlayerName(player, " ");
    return player;
}

void assignPlayerName(PLAYER* player, char *name)
{
    name=" ";
    strcpy(player->name, name);
}

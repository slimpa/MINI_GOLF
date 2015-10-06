#ifndef _PLAYER_H
#define _PLAYER_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_NAME_LENGTH 10

typedef struct player
{
    char name[MAX_NAME_LENGTH];
}PLAYER;

PLAYER* playerCreate(void);
void assignPlayerName(PLAYER* player, char *name);

#endif

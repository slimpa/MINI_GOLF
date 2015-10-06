CC=gcc

all: ball tests build

.PHONY:	ball tests build

ball:
	$(CC) -c src/ball_movement.c -I/usr/include/SDL2 -lSDL2 -o ../build/ball_movement.o
tests:
	$(MAKE) -C tests all
build:
	$(MAKE) -C build all

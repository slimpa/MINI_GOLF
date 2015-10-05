CC=gcc

all: gui test

.PHONY: gui test

gui:
	$(CC) -c src/gui.c -I/usr/include/SDL2 -lSDL2 -o ../build/gui.o

test:
	$(MAKE) -C tests all

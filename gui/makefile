CC=gcc

all: gui tests

.PHONY: gui tests

gui:
	$(CC) -c src/gui.c -I/usr/include/SDL2 -lSDL2 -o ../build/gui.o
tests:
	$(MAKE) -C tests all

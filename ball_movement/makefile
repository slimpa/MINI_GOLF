all: ball test

.PHONY:	ball test

ball:
	gcc -c src/ball_movement.c -o ../build/ball_movement.o

test:
	$(MAKE) -C tests all

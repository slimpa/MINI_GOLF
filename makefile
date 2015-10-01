all: stats player ball_movement gui main build

.PHONY: stats player ball_movement gui main build

stats:
	$(MAKE) -C stats all

player:
	$(MAKE) -C player all

ball_movement:
	$(MAKE) -C ball_movement all

gui:
	$(MAKE) -C gui all

main:
	$(MAKE) -C main all

build:
	$(MAKE) -C build all

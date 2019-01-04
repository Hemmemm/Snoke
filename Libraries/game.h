#ifndef GAME_H
#define GAME_H
#include "snake.h"
#include <ncurses.h>
class Game
{
private:
	bool** labyrinth;
	int speed;
	void setLabyrinth(int size);
	void setSpeed(int sp);
	Snake snake;
	Snake* snakeEnemies;
public:
	int init(int size = 20, int sp = 100);
	int run();
	void mSleep(int time);
};
#endif
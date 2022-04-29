#pragma once
#include <vector>
const int SCREEN_WIDTH = 320;
const int SCREEN_HEIGHT = 240;
const char CELL_SIZE = 16;
const char SCREEN_RESIZE = 2;
const short MARO_SPEED = 1;
enum Cell {
	Brick,
	Empty,
	Pipe,
	QuestionBlock,
	Wall
};
typedef std::vector <std::array<Cell, SCREEN_HEIGHT / CELL_SIZE>> Map;
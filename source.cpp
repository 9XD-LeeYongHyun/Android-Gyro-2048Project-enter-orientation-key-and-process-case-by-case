#include <conio.h>
#include <stdio.h>
#include <Windows.h>

#pragma warning(disable:4996)

const int MAX_WIDTH_SIZE = 4, MAX_HEIGHT_SIZE = 4, MIN_TILE_VAL = 2;
const int PREV_KEY_VAL = 224, UP_KEY_VAL = 72, DOWN_KEY_VAL = 80, LEFT_KEY_VAL = 75, RIGHT_KEY_VAL = 77, ESC_KEY_VAL = 27;

int command;

int gameMap[MAX_HEIGHT_SIZE][MAX_WIDTH_SIZE];

int main(void) {
	do {
		command = getch();

		if (command == ESC_KEY_VAL) {
			printf("ESC\n");
			break;
		}
		else if (command != PREV_KEY_VAL) {
			printf("UNKNOWN COMMAND");
		}

		else {
			command = (int)getch();

			switch (command) {
			case UP_KEY_VAL:
				printf("UP");
				break;
			case DOWN_KEY_VAL:
				printf("DOWN");
				break;
			case LEFT_KEY_VAL:
				printf("LEFT");
				break;
			case RIGHT_KEY_VAL:
				printf("RIGHT");
				break;
			}
		}
		printf("\n");
	} while (true);

	system("pause");
	return 0;
}

#include "screen.h"
#include <stdio.h>

void clearScreen(void) {
	printf("\033[0m");
	fflush(stdout);
}

void setColors(int fg, int bg) {
	printf("\033[1;%d;%dm", fg, bg + 10);
	fflush(stdout);
}

void resetScreen(void) {
	printf("\033[0m");
	fflush(stdout);
}
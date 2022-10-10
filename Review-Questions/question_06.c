// Question 6, Chapter 6, C Primer Plus
//
// Use nested loops to write a program that
// produces this pattern:
//
// $$$$$$$$
// $$$$$$$$
// $$$$$$$$
// $$$$$$$$

#include <stdio.h>

#define ROWS 4
#define COLUMNS 8

int main() {

	int row;
	int column;
	char ch;

	for (row = 0; row < ROWS; row++) {
		for (column = 0; column < COLUMNS; column++)
			printf("$", ch);
		printf("\n");
	}

	return 0;
}

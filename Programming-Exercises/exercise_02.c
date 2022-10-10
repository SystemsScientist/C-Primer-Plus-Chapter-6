// Exercise 2, Chapter 6, C Primer Plus
//
// Use nested loops to produce the following pattern:
//
// $
// $$
// $$$
// $$$$
// $$$$$

#include <stdio.h>

#define ROWS 5

int main() {

	int row;
	int column;
	char ch;

	for (row = 0; row < ROWS; row++) {
		for (column = 0; column < row + 1; column++)
			printf("$", ch);
		printf("\n");
	}

	return 0;
}

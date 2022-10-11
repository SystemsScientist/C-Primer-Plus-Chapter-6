// Exercise 3, Chapter 6, C Primer Plus
//
// Use nested loops to produce the following pattern:
//
// F
// FE
// FED
// FEDC
// FEDCB
// FEDCBA

#include <stdio.h>

#define ROWS 7

int main() {
	
	int row;
	int column;
	char ch;

	for (row = 1; row < ROWS; row++) {
		for (ch = 'F'; 'F' - ch < row; ch--)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}

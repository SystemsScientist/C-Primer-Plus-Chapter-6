// while1.c -- watch your braces
// Note output:
//
// 	n is 0
// 	n is 0
// 	n is 0
// 	n is 0 
// 	n is 0
//
// 	(...and so on, until you kill the program.)

#include <stdio.h>

int main() {

	int n = 0;

	while (n < 3)
		printf("n is %d\n", n);
		n++;
	printf("That's all this program does.\n");

	return 0;
}

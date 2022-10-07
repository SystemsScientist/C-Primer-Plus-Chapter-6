// boolean.c -- using a _Bool variable

#include <stdio.h>
#include <stdbool.h>	// Using stdbool.h directive

int main() {

	long num;
	long sum = 0L;
	bool input_is_good; // bool replaces _Bool

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	input_is_good = (scanf("%ld", &num) == 1);

	while (input_is_good) {

		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;
}

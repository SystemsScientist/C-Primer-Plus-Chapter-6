// summing.c -- sums integers entered interactively

#include <stdio.h>

int main() {

	long num;
	long sum = 0L;	// initializes sum to zero
	int status;

	printf("\nPlease enter an integer to be summed ");
	printf("(q to quit): ");
	status = scanf("%ld", &num);

	while (status == 1) {

		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);
	
	printf("\n");
	return 0;
}

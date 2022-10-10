// Exercise 1, Chapter 6, C Primer Plus
//
// Write a program that creates an array
// with 26 elements and stores the 26 
// lowercase letters in it. Also have it
// show the array contents.

# include <stdio.h>

#define ALPHABET_LENGTH 26
#define LETTERS 26

int main() {

	char alphabet_array[ALPHABET_LENGTH];
	char ch;
	int index;

	for (ch = 'a'; ch <= 'z'; ch++)
		alphabet_array[ch] += ch;

	for (index = 1; index <= LETTERS; index++)
		printf("Letter = %c\n", alphabet_array[ch]);

	return 0;
}

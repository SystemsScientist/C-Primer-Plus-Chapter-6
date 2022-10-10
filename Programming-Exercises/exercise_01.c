// Exercise 1, Chapter 6, C Primer Plus
//
// Write a program that creates an array
// with 26 elements and stores the 26 
// lowercase letters in it. Also have it
// show the array contents.

# include <stdio.h>

#define LETTERS 26

int main() {
	
	char alphabet[26];
	char ch;
	int index;
	
	// insert letters a through x into alphabet array
	for (ch = 'a';ch - 'a' <= LETTERS; ch++)
		alphabet[ch - 'a'] = ch;
	
	// read letters a through x from alphabet array
	for (index = 0; index < 26; index++)
		printf("Letter = %c\n", alphabet[index]);
	
	return 0;
}

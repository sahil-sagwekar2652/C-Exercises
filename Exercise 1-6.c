/* Exercise 1-6. Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>
#define EOF -1

int main() /* count characters in input */
{
	int c, nl, tb, bl;
	nl, tb, bl = 0;

	while ((c ==   getchar()) != EOF) 
	{
		if (c == '\n')
			++nl;
		else if (c == ' ')
			++bl;
		else if (c == '\t')
			++tb;
	}
	printf("newlines = %d\n", nl);
	printf("blanks = %d\n", bl);
	printf("tabs = %d\n", tb);

	return 0;
}

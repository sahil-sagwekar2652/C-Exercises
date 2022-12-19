/* Write a program to copy it's input to its output, replacing each string of one or more blanks by a single blank */

#include <stdio.h>

int main() 
{
	int c;
	int isblank = 0;
	while ((c == getchar()) != EOF)
	{		
		if (c == ' ')
			isblank = 1;
		else
			isblank = 0;

		if (isblank == 0)
			continue;
		
		putchar(c);
	}
	
	return 0;
}

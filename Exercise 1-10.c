#include <stdio.h>

main() {
	
	int c;
	while ((c = getchar()) != '\n') 
	{
		if (c != ' ')
		{
			putchar(c);
		}
		else 
		{
			putchar('\n');
		}
	}

}

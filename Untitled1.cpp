#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
int main()
{

	int i;
	while (i < 10)
	{
		char pword;
		pword[i] = getch();
		c = pword[i];
		if (c == 13)
			break;
		else
			printf("*");
		i++;
	}
	pword[i] = '\0';
	// char code=pword;
	i = 0;

	getch();
}
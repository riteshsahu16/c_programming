#include<stdio.h>
#define IN 1
#define OUT 0

int main()
{
	// Get word print it on one line
	int ch, state;
	state = OUT;
	while((ch=getchar()) != EOF)
	{
		if(ch==' ' || ch=='\n' || ch=='\t') 
		{
			state = OUT;
		}
		else
		{
			putchar(ch);
			state = IN;
		}
		
		if(state == OUT)
			putchar('\n');
	}
	return 0;
}

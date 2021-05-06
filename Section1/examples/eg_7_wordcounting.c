#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{
	//count lines, words and characters in input 
	int nw, nl, nc, ch, state;
	nw = nl = nc = 0;
	state = OUT;	
	while((ch = getchar()) != EOF)
	{
		nc++;

		if(ch == '\n')
			nl++;
		if(ch == ' ' || ch == '\t' || ch == '\n')
			state = OUT;
		else if(state==OUT)
		{
			state = IN;
			nw++;
		}
	}

	printf("Total No. of characters : %d\n", nc);
	printf("Total no. of lines : %d\n", nl);
	printf("Total no. of WORDS: %d\n", nw);
	return 0;
}

#include<stdio.h>
#define SIZE 128
int main()
{
	//Print a histogram of the frequencies of different characaters in its input.
	int ch, i, j,pos, val,character[SIZE], max=0;
	
	for(i=0; i<SIZE; i++)
		character[i] = 0;

	//1. Input all characters & store it's frequency in an array
	while((ch = getchar()) != EOF)
	{
		pos = ch - 0;
		character[pos]++;
	}
	
	// Max-Freq : ONly for Vertical Histogram
	for(i=0; i<SIZE; i++)
		if(character[i]>max)
			max = character[i];
	printf("max freq: %d\n", max);

	/* PRINTS char array
	for(i=0; i<SIZE; i++)
	{
		if(character[i]>0)
			printf("%c occured %d times!\n", i, character[i]);
	}
	*/
	
	//2. Print histogram a/c to arr: if any entry's value is not greater than zero than ignore that entry.
	
	//Horizontal Histogram:
	//x-axis:frequence   y-axis:character
	
	for(i=0; i<SIZE; i++)
	{
		val = character[i];
		if(val>0)
		{
			if(i==' ')
				printf("' '|");
			else if(i=='\n')
				printf("\\n |");
			else if(i=='\t')
				printf("\\t |");
			else if(i>32 && i<128)
				printf("%c  |", i);
			else
				printf("NP |");
			for(j=0; j<val; j++)
				printf("-");
			printf("\n");
		}
	}
	printf("\n");
		
	return 0;
}


#include<stdio.h>
#define MAX 500
#define IN 1
#define OUT 0
int main()
{
	int ch, n=0, data[MAX], len=0, state = OUT, i, j=0, max=0;
	for(i=0; i<MAX; i++)
	{
		data[i] = 0;
	}
	while ((ch=getchar()) != EOF)
	{
		//get length of words and put it in array
		if(ch == ' ' || ch == '\t' || ch=='\n')
		{
			if(state==IN)
			{
				n++;
				data[j] = len;
				j++;
				state = OUT;
				len = 0;
			}	
		}
		else
		{
			if(state == IN)
				len++;
			else
			{
				state = IN;
				len++;
			}
		}
	}
	//print data
	printf("data : \n");
	for(i = 0; i<n; i++)
	{
		printf("%d : %d\n", i+1, data[i]);
		if(data[i]>max)
			max = data[i];
	}
	//printf("largest word length: %d\n", max);
	
	//Draw histogram for given data : freq. for words of length 1, 2, 3, 4, ..... 
	i=j=0;
	printf("\n\n");
	printf("X-axis :length-word \t Y-axis :word-position\n");
	printf("Horizontal Histogram : \n\n");	
	//Horizontal histogram
	for(i=n; i>0; i--)
	{
		printf("%d|",i);
		for(j=0; j<data[i-1]; j++)
			printf("-");
		printf("\n");
	}
	printf("\n\n");
	printf("X-axis :word-position \t  Y-axis:length-word\n");
	printf("Vertical Histogram : \n\n");
	
	//Vertical histogram
	for(i=max; i>0; i--)
	{
		//printf("|");
		for(j=0; j<n; j++)
		{
			if(data[j] >= i)
				printf("| ");
			else
				printf("  ");
		}
		printf("\n");
	}
	for(i=0; i<2*n; i++)
		printf("-");
	printf("\n");
	for(i=1; i<=n; i++)
		printf("%d ", i);
	printf("\n");
	return 0;

}

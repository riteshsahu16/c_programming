#include<stdio.h>
#define MAX 500
int main()
{
	int ch, n, data[MAX], len;
	while ((ch=getchar()) != EOF)
	{
		//get length of words and put it in array
	
	}

	//Draw histogram for given data : freq. for words of length 1, 2, 3, 4, ..... 
	
	
	//Horizontal histogram
	int i, j, max=0;
	for(i=n; i>0; i--)
	{
		if (i>max)
			max = data[i-1];
		
		printf("%d|",i);
		for(j=0; j<data[i-1]; j++)
			printf("-");
		printf("\n");
	}
	printf("\n\n");
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
}

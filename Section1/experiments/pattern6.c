#include<stdio.h>
#define N 11
int main()
{
	int i, j, c=N, h;
	h = N/2+1;
	for(i=0; i<h; i++)
	{

		for(j=0; j<i; j++)
			printf(" ");
		for(j=0; j<c; j++)
			printf("*");
		for(j=0; j<i; j++)
			printf(" ");
		c = c-2;
		printf("\n");
	}
	c=3;
	for(i=1; i<h; i++)
	{
		for(j=0; j<h-1-i; j++)
			printf(" ");
		for(j=0; j<c; j++)
			printf("*");
		for(j=0; j<h-i; j++)
			printf(" ");
		c = c+2;
		printf("\n");
	}

}

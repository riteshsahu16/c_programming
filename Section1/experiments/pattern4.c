#include<stdio.h>
#define N 10
int main()
{
	int i, j;
	for(i=N; i>0; i--)
	{
		for(j=0; j<N-i; j++)
			printf(" ");
		for(j=i; j>0; j--)
			printf("*");	
		printf("\n");
	}
	for(i=0; i<N-1; i++)
	{
		for(j=0; j<N-i-2; j++)
			printf(" ");
		for(j=0; j<i+2; j++)
			printf("*");
		printf("\n");
	}
}

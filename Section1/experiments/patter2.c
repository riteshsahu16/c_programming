#include<stdio.h>
#define N 10
int main()
{
	int i, j;
	for(i=N; i>0; i--)
	{
		for(j=0; j<i; j++)
			printf("*");
		printf("\n");
	}
	for(i=2; i<N; i++)
	{
		for(j=0; j<i; j++)
			printf("*");
		printf("\n");
	}
}

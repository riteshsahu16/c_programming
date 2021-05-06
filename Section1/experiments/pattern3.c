#include<stdio.h>
#define N 10
int main()
{
	int i=0, j=0, end=0, k=0;
	for(i=N; i>0; i--)
	{
		for(j=i-1; j>0 ;j--)
			printf(" ");
		for(j=0; j<N-(i-1); j++)		
			printf("*");
		printf("\n");
	}
	return 0;
}

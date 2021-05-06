#include<stdio.h>
#define N 15
int main()
{
	int i, j, c=1, s;
	
	for(i=1; i<=N; i++)
	{
		if(c>N)
			break;
		for(j=0; j<N-i; j++)
			printf(" ");
		for(j=0; j<i; j++)
		{
			printf("%d ", c);
			c++;
		}
		for(j=0; j<N-i; j++)
			printf(" ");
		printf("\n");
	}
	return 0;
}

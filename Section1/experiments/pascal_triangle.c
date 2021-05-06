#include<stdio.h>
#define N 8 // Height = base

int factorial(int n)
{
	if (n==0 || n==1)
		return 1;
	else
		return n * factorial(n-1);
}

int main()
{
	int i, j, h, c=0, val;
	h = N-1;
	for(i=0; i<N; i++)
	{
		//space
		for(j=1; j<N-i; j++)
			printf(" ");

		for(j=0; j<=i; j++)
		{
			if(i==0)
				printf("1");
			else 
			{
				val = factorial(i) / (factorial(i-j) * factorial(j)) ;
				printf("%d ", val);
		
			}
		}
		
		//space
		for(j=1; j<N-i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}	
}

#include<stdio.h>
#define N 8 // Height = base
int main()
{
<F7>	int i, j, h, c=0;
	h = N-1;
	for(i=N; i>0; i-- )
	{
		for(j=1; j<i; j++)
			printf(" ",j);
		printf("1");
		
		for(j=1; j<i; j++)
			printf(" ", j);
		
		printf("\n");
	}
}

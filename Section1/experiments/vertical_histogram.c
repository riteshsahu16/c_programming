#include<stdio.h>
#define N 5
int main()
{
	int i, j, max=0;
	//Print frequencies as histogram 
	int data[N] = {5,2,1,7,4};
	
	//1 find max freq.
	for(i=0; i<N; i++)
		if(data[i]>max)
			max = data[i];

	//2. Start from max to .... 4,3,2,1, if the holder freq is >= max then print | else print blank space
	
	for(i =max; i>0; i--)
	{
		for(j=0; j<N; j++)
		{
			if(data[j]>=i)
				printf("| ");
			else
				printf("  ");
		}
		printf("\n");
	}
	for(i=0; i<= 2*N; i++)
		printf("_");
	printf("\n");
	for(i=0; i<N; i++)
		printf("%d ", i);
	return 0;
	
}

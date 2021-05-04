#include<stdio.h>
int main()
{
	//Draw histogram for given data
	int data[] = {5,2,7,8,9};
	n = 5;
	//Horizontal histogram
	int i, j;
	
	for(i=n; i>0; i--)
	{
		printf("%d|");
		for(j=0; j<data[n-1]; j++)
			printf("-");
		printf("\n");
	}
}	

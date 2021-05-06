#include<stdio.h>
#define  N 21
int main()
{
	int i=1, j=1, c=1;
	
	while(i<N)
	{
		if(c>N)
			break;
		j=0;
		while(j<i && c <=N)
		{
			printf("%d ", c);
			c++; j++;
		}
		i++;
		printf("\n");
	}	

}

#include<stdio.h>
#define N 11
int main()
{
	int i, j, h, c=1;
	
	//Print blank space : N/2 
	//Print * : 1, 3, 5, 7, ... N
	//Print blank space : N/2
	h =  N/2+1;
	for(i=h; i>0; i--)
	{
		for(j=1; j<i; j++)
			printf(" ");	
		for(j=0; j<c ; j++){
			printf("*");
		
		}
		c = c+2;
		for(j=1; j<i; j++)
			printf(" ");
		printf("\n");
	}
	
}

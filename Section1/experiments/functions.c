#include<stdio.h>

int power(int x, int y);

int main()
{
	int x= 5, y=3;
	int res = power(x,y);
	printf("%d ki power %d is %d \n", x, y, res);
	return 0;
}

int power(int x, int y)
{
	int i, res=1;
	for (i=y; i>0; i--)
		res *= x;
	return res
}

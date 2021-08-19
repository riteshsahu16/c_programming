#include<stdio.h>

int power(int , int);

int main()
{
	int x=5, y=3;
	printf("%d ki power %d is %d\n", x, y, power(x, y));
	return 0;
}

int power(int x, int y)
{
	int i, res=1;
	for (int i=y; i>0; i--)
	{
		res = res * x;
	}
	printf("check res : %d\n", res);
	return res;
}

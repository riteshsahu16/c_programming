#include<stdio.h>
#define UPPER 50
#define LOWER 0
float cls_to_fahr(int cls)
{
	float fahr = (9.0 * cls)/5 + 32;
	return fahr;
}

int main()
{
	int i;
	for (i = LOWER; i<= UPPER; i++)
	{
		printf("%3.2f\n", cls_to_fahr(i));
	}
	return 0;
}

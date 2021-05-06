#include<stdio.h>
int main()
{
	//Count no. of occurrence of digits, white spaces & other}
	int ch, pos,no_space, no_other, digit[10], i;
	for(i=0; i<10; i++)
		digit[i] = 0;
		
	while( (ch = getchar()) != EOF)
	{
		if (ch>='0' && ch<='9')
		{
			pos = ch - '0';
			digit[pos]++;
		}
		else if(ch==' ' || ch == '\t' || ch == '\n')
			no_space++;
		else
			no_other++;
	}
	for(i=0; i<10; i++)
		printf("occurence of %d is %d\n", i, digit[i]);

	printf("No. of space %d\n", no_space);
	printf("No. of other char %d\n", no_other);
}

